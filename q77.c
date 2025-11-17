//WAP TO CHECK IF THE ELEMENTS ON THE DIAGONAL OF A MATRIX ARE DISTINCT
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Read matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // If not square, diagonal check not valid
    if (r != c) {
        printf("False");
        return 0;
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
