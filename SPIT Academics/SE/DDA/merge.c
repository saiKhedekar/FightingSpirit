#include <stdio.h>
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}


void mergeSortRecursive(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSortRecursive(arr, left, mid);
        mergeSortRecursive(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}


int MergeSort(int arr[], int n) {
    mergeSortRecursive(arr, 0, n - 1);
    return 0;
}

void PrintArray(int arr[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int main(void){
  int n;
  printf("Enter total number of elements: ");
  scanf("%d",&n);
  
  int arr[n];
  for(int i = 0; i < n; i++){
    printf("Element %d: ",(i + 1));
    scanf("%d",&arr[i]);
  }
  printf("Before Sorting: ");
  PrintArray(arr, n);
  MergeSort(arr, n);
  printf("After Sorting: ");
  PrintArray(arr, n);
  return 0;
}

