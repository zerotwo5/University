#include <stdio.h>

int main() {
    int num, temp;
    int index = 0, i;
    int binary[32];

    printf("Enter your roll number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    temp = num;
    while (temp > 0) {
        binary[index] = temp % 2;
        temp = temp / 2;
        index++;
    }

    printf("Binary representation: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
