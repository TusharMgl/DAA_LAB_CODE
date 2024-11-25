#include <stdio.h>

void multi_Matrix(int *matrix1, int *matrix2, int *result, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(result + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(result + i * c2 + j) += *(matrix1 + i * c1 + k) * *(matrix2 + k * c2 + j);
            }
        }
    }
}
int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible because the Columns of 1st matrix is not match with the rows of 2nd matrix.\n");
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    printf("Enter elements of 1st matrix (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    multi_Matrix(&matrix1[0][0], &matrix2[0][0], &result[0][0], r1, c1, c2);
    printf("Product of the matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
