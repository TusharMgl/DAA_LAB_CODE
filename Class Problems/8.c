#include <stdio.h>
int FirstOne(int arr[], int n) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == 1) {
            result = mid;
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    return result;
}
int count_Ones(int arr[], int n) {
    int firstOneIndex = FirstOne(arr, n);

    if (firstOneIndex == -1) {
        return 0;
    }
    return n - firstOneIndex;
}
int main() {
    int arr[] = {0, 0, 0, 1, 1, 1, 1};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = count_Ones(arr, n);
    printf("The number of 1's in the array is: %d\n", result);
    return 0;
}