#include <stdio.h>

int Non_Zero_Elements(int arr[4][4], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int arr[4][4] = {
        {1, 0, 3},
        {0, 2, 0},
        {4, 0, 5},
        {5, 0, 6}
    };
    int rows = 3, cols = 3;

    int result = Non_Zero_Elements(arr, rows, cols);

    printf("Total number of non-zero elements: %d\n", result);

    return 0;
}
