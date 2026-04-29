#include <stdio.h>
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSortRecursive(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSortRecursive(arr, low, pi - 1);
        quickSortRecursive(arr, pi + 1, high);
    }
}

int QuickSort(int arr[], int n) {
    quickSortRecursive(arr, 0, n - 1);
    return 0;
}

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int n;
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting: ");
    PrintArray(arr, n);

    QuickSort(arr, n);

    printf("After Sorting: ");
    PrintArray(arr, n);

    return 0;
}
