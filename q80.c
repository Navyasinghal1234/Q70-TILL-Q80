//WAP TO MULTIPLY TWO MATRICES.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Read size of first matrix
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];

    // Read first matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read size of second matrix
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];

    // Read second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check multiplication condition
    if (c1 != r2) {
        printf("Invalid");
        return 0;
    }

    int result[r1][c2];

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
