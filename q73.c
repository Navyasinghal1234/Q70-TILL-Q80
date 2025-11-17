//WAP TO FIND SUM OF EACH ROW OF MATRIX AND STORE IT IN AN ARRAY.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Read matrix values
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;   // initialize sum for each row
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];   // add element to row sum
        }
    }

    // Print row sums
    for(int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
