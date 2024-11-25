 #include <stdio.h>

void DistinctElements(int arr[], int n) {
    int count;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {12,14,10,11,12,13,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Distinct elements in the array are:\n");
    DistinctElements(arr, n);

    return 0;
}
