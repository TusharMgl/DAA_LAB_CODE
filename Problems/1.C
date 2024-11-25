#include <stdio.h>
int sum_Array(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sum_Array(arr, n - 1);
}

int main() 
{
    int n;
    printf("Enter the elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int Sum = sum_Array(arr, n);
    printf("The sum of all array: %d\n", Sum);
    
    return 0;
}