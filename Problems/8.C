#include <stdio.h>

void Lar_Three(int arr[], int n) {
    int A1, A2, A3;

    if (n < 3) {
        printf("Array have minium 3 elements.\n");
        return;
    }
    A1 = A2 = A3 = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > A1) {
            A3 =A2;
            A2 = A1;
            A1 = arr[i];
        } else if (arr[i] > A2 && arr[i] < A1) {
            A3 = A2;
            A2 = arr[i];
        } else if (arr[i] > A3 && arr[i] < A2) {
            A3 = arr[i];
        }
    }
    printf("Three largest  distinct elements are: %d, %d, %d\n", A1, A2, A3);
}

int main() {
    int arr[] = {11,14,25,18,16 };
    int n = sizeof(arr) / sizeof(arr[0]);

    Lar_Three(arr, n);
    return 0;
}
