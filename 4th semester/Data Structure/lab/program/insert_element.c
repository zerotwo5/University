#include <stdio.h>

int main() {
    int i, a[6] = {1, 2, 3, 4, 5}; 
    int m, x;

    printf("Array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter index (0 to 4) where you want to insert: ");
    scanf("%d", &m);

    printf("Enter the enterted value: ");
    scanf("%d", &x);

    if (m >= 0 && m < 5) {
        for (i = 5; i > m; i--) {
            a[i] = a[i - 1];  
        }
        a[m] = x;  
    } else {
        printf("\n Invalid index! \n");
        return 0;
    }

    printf("Array after insertion: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}