#include <stdio.h>

int main() {
    int a[6], x, s, flag = 0;

    printf("Enter 6 elements: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter the number for search: ");
    scanf("%d", &s);

    for (int i = 0; i < 6; i++) {
        if (a[i] == s) {
            printf("\nFound at index: %d\n", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("\n Not Found \n");
    }

    return 0;
}