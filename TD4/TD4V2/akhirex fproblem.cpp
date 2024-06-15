#include <stdio.h>

int main() {
    int arr[] = {3, 4, 7, 3, 4, 6, 5, 2, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int left = 0;
    int right = n - 1;
    int i = 0;

    while (i <= right) {
        if (arr[i] < x) {
            int temp = arr[i];
            arr[i] = arr[left];
            arr[left] = temp;
            i++;
            left++;
        } else if (arr[i] > x) {
            int temp = arr[i];
            arr[i] = arr[right];
            arr[right] = temp;
            right--;
        } else {
            i++;
        }
    }

    printf("Partitioned Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
