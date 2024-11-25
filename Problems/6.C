 #include <stdio.h>

int main() {
    int n, key, found = 0;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the no. to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Number %d found at this position %d.\n", key, i + 1);
            break;
        }
    }
    if (!found) {
        printf("No. %d not found.\n", key);
    }
    return 0;
}
