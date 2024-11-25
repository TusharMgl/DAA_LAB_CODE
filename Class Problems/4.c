#include <stdio.h>
int Occurrence(int arr[], int n, int key, int findFirst) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;
            if (findFirst)
                high = mid - 1; 
            else
                low = mid + 1;  
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}
int count_Occurrences(int arr[], int n, int key) {
    int first = Occurrence(arr, n, key, 1);
    if (first == -1)
        return 0;

    int last = Occurrence(arr, n, key, 0);
    return last - first + 1;
}
int main() {
    int arr[] = {2, 4, 10, 10, 10, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    printf("Count of %d: %d\n", key, count_Occurrences(arr, n, key));
    return 0;
}