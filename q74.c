//WAP TO FIND TRANSPOSE OF A MATRIX.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], t[cols][rows];

    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];
        }
    }

    
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
