#include <stdio.h>
#include <ctype.h>

#define MAX 20

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char exp[MAX];
    char *e;
    int n1, n2, n3, num;

    printf("Enter the postfix expression: ");
    scanf("%s", exp);

    e = exp;

    while (*e != '\0') {
        if (isdigit(*e)) {
            num = *e - '0'; // Convert character to integer
            push(num);
        } else {
            n1 = pop();
            n2 = pop();

            switch (*e) {
                case '+': n3 = n2 + n1; break;
                case '-': n3 = n2 - n1; break;
                case '*': n3 = n2 * n1; break;
                case '/': n3 = n2 / n1; break;
                default: printf("Invalid operator\n"); return 1;
            }
            push(n3);
        }
        e++;
    }

    printf("\nThe result of the expression %s = %d\n", exp, pop());

    return 0;
}
