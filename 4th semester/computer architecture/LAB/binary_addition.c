#include <stdio.h>

int main() {
    int A[5], B[5], Sum[6];
    int carry = 0;

    // Input values for A
    printf("Enter 5-bit binary number A: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    // Input values for B
    printf("Enter 5-bit binary number B: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    // Compute 1's complement of B
    for (int i = 0; i < 5; i++) {
        B[i] = 1 - B[i];
    }
    
    printf("\n1's Complement of B: ");
    for (int i = 0; i < 5; i++) {
        printf("%d", B[i]);
    }
    printf("\n");

    // Perform binary addition (A + 1's complement of B)
    for (int i = 4; i >= 0; i--) {
        int sumBit = A[i] + B[i] + carry;
        Sum[i + 1] = sumBit % 2;  // Store binary sum
        carry = sumBit / 2;       // Compute carry
    }
    Sum[0] = carry; // Store the final carry

    // Display the sum result
    printf("\nSum: ");
    for (int i = 0; i < 6; i++) {
        printf("%d", Sum[i]);
    }
    printf("\n");

    // Display final carry
    printf("Carry: %d\n", carry);
    
    return 0;
}