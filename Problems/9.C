 #include <stdio.h>
void moveZeroesatlast(int arr[], int n) {
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while (count < n) {
        arr[count++] = 0;
    }
}
int main() {
    int arr[] = {1,3,0,5,6,0,8,10,0,52};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroesatlast(arr, n);
    printf("Array after moving zeroes to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
