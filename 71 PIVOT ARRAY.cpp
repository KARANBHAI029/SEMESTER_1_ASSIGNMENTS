#include <stdio.h>

int main() {
    int arr[] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;
    int pivot = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if mid is the pivot
        if (mid < high && arr[mid] > arr[mid + 1]) {
            pivot = mid;
            break;
        }
        if (mid > low && arr[mid] < arr[mid - 1]) {
            pivot = mid - 1;
            break;
        }

        // Decide whether to search in the left half or the right half
        if (arr[low] >= arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (pivot == -1) {
        printf("No pivot element found.\n");
    } else {
        printf("The pivot element is %d\n", arr[pivot + 1]);
    }

    return 0;
}
