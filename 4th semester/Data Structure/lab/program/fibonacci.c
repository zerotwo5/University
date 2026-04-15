

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter how many numbers you want in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    if (n >= 1) {
        printf("%d ", a);
    }
    if (n >= 2) {
        printf("%d ", b);
    }

    i = 3;
    while (i <= n) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i = i + 1;
    }

    return 0;
}

