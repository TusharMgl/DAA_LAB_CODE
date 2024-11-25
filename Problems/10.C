#include <stdio.h>
void rearrangeInDescendingOrder(int arr[], int n) {
  
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int arr[] = {12,14,15,13,12,11,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rearrangeInDescendingOrder(arr, n);

    printf("\nArray in Descending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
