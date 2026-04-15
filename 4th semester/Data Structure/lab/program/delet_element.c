#include <stdio.h>

int main() {
    int a[6] = {1, 2, 3, 0, 8, 5};  
    int n = 6, x, i, j, found = 0;

    printf("The given Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter element to delete: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            found = 1;
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];  
            }
            n--;  
            break;
        }
    }

    if (found) {
        printf("After deleting an element from Array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Element not found!\n");
    }

    return 0;
}