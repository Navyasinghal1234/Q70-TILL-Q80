//WAP TO FIND SUM OF ALL ELEMENTS IN A MATRIX.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int sum = 0;

    // Input matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];   // Add to sum
        }
    }

    printf("%d", sum);

    return 0;
}
