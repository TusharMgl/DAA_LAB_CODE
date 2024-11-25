#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void find_Swap(int arr[], int n) {
    if (n < 4) {
        printf("Array should have at least 4 elements to swap second smallest and second largest.\n");
        return;
    }
    int smallest = -1, secondSmallest = -1;
    int largest = -1, secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (smallest == -1 || arr[i] < arr[smallest]) {
            secondSmallest = smallest;
            smallest = i;
        } else if (secondSmallest == -1 || arr[i] < arr[secondSmallest]) {
            secondSmallest = i;
        }

        if (largest == -1 || arr[i] > arr[largest]) {
            secondLargest = largest;
              largest = i;
        } else if (secondLargest == -1 || arr[i] > arr[secondLargest]) {
            secondLargest = i;
        }
    }
    swap(&arr[secondSmallest], &arr[secondLargest]);
}

int main() {
    int arr[] = {11,12,14,15,1,18};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    find_Swap(arr, n);
    printf("Array after swapping second smallest and second largest:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
