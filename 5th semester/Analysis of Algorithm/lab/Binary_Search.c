#include <stdio.h>

int main() {
    int arr[100], n, target;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Found at index %d\n", mid);
            return 0;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Not found\n");
    return 0;
}

