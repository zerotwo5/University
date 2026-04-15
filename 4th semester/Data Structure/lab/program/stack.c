#include <stdio.h>
#define SIZE 5  

int main() {
    int stack[SIZE], top = -1, choice, x, i;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nChoose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (top == SIZE - 1) {
                printf("Stack is full!\n");
            } else {
                printf("Enter element to push: ");
                scanf("%d", &x);
                top++;
                stack[top] = x;
                printf("%d pushed into stack.\n", x);
            }
        } else if (choice == 2) {
            if (top == -1) {
                printf("Stack is empty!\n");
            } else {
                printf("%d popped from stack.\n", stack[top]);
                top--;
            }
        } else if (choice == 3) {
            if (top == -1) {
                printf("Stack is empty!\n");
            } else {
                printf("Stack elements: ");
                for (i = 0; i <= top; i++) {
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
        } else if (choice == 4) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
