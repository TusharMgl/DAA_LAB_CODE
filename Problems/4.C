#include <stdio.h>
int main() {
    int rows, columns;
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no.r of columns: ");
    scanf("%d", &columns);

    int matrix[10][10]; 
    printf("Enter the elements in the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Sum of every row:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }

    printf("Sum of every column:\n");
    for (int j = 0; j < columns; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }

    return 0;
}
