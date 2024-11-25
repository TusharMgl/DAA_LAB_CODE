#include <stdio.h>
int MissingTerm(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int expectedDiff = arr[mid] - arr[0];
        int actualDiff = mid;

        if (expectedDiff == actualDiff) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return arr[low] - 1;  
}
int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingTerm = MissingTerm(arr, n);
    printf("The missing term is: %d\n", missingTerm);

    return 0;
}