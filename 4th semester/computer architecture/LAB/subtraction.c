#include <stdio.h>

int main() {
    int A[5], B[5], oneCom[5], twoCom[5], Sum[6], carry = 1;

    // Input A
    printf("Enter 5-bit binary A: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    // Input B
    printf("Enter 5-bit binary B: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
        oneCom[i] = 1 - B[i]; // 1's complement of B
    }

    // Display 1's Complement of B
    printf("\n1's Complement of B: ");
    for (int i = 0; i < 5; i++) {
        printf("%d", oneCom[i]);
    }
    printf("\n");

    // Compute 2's complement of B by adding 1 to 1's complement
    for (int i = 4; i >= 0; i--) {
        int sumBit = oneCom[i] + carry;
        twoCom[i] = sumBit % 2;
        carry = sumBit / 2;
    }

    // Display 2's Complement of B
    printf("\n2's Complement of B: ");
    for (int i = 0; i < 5; i++) {
        printf("%d", twoCom[i]);
    }
    printf("\n");

    // Perform A + 2's complement of B
    carry = 0;
    for (int i = 4; i >= 0; i--) {
        int sumBit = A[i] + twoCom[i] + carry;
        Sum[i + 1] = sumBit % 2;
        carry = sumBit / 2;
    }
    Sum[0] = carry;

    // Print subtraction result (A - B)
    printf("\nResult (A - B): ");
    for (int i = 0; i < 6; i++) {
        printf("%d", Sum[i]);
    }
    printf("\n");

    return 0;
}