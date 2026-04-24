#include <stdio.h>

#define MAX 100

int main() {
    char X[MAX], Y[MAX], lcs[MAX];
    int L[MAX][MAX];
    int m = 0, n = 0;
    int i, j;

    printf("Enter first string: ");
    scanf("%s", X);
    printf("Enter second string: ");
    scanf("%s", Y);

    /* Find lengths of strings */
    for (m = 0; X[m] != '\0'; m++);
    for (n = 0; Y[n] != '\0'; n++);

    /* Initialize table with 0 */
    for (i = 0; i <= m; i++)
        for (j = 0; j <= n; j++)
            L[i][j] = 0;

    /* Fill table */
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = (L[i-1][j] > L[i][j-1]) ? L[i-1][j] : L[i][j-1];
        }
    }

    /* Reconstruct LCS */
    int index = L[m][n];
    lcs[index] = '\0';
    i = m; j = n;
    while (i > 0 && j > 0) {
        if (X[i-1] == Y[j-1]) {
            lcs[index-1] = X[i-1];
            i--; j--; index--;
        } else if (L[i-1][j] > L[i][j-1])
            i--;
        else
            j--;
    }

    printf("Length of LCS: %d\n", L[m][n]);
    printf("LCS: %s\n", lcs);

    return 0;
}
