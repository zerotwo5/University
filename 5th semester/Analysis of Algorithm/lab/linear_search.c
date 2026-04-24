#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i] );
    }

    printf("\n Enter the number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number %d found at index %d (position %d).\n", key, i, i+1);
            found = 1;
            break; 
        }
    }

    if(!found) {
        printf("Number %d not found in the array.\n", key);
    }

    return 0;
}
