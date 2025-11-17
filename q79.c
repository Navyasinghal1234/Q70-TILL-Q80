//WAP TO PERFORM DIAGONAL TRAVERSAL OF A MATRIX.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print diagonals starting from first row
    for (int startCol = 0; startCol < m; startCol++) {
        int i = 0, j = startCol;

        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Print diagonals starting from last column (excluding first row)
    for (int startRow = 1; startRow < n; startRow++) {
        int i = startRow, j = m - 1;

        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
