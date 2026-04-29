#include <stdio.h>
#include <stdlib.h>

struct KthLargest {
    int *heap;
    int heapSize;
    int k;
};

struct KthLargest* KthLargestCreate(int k) {
    struct KthLargest* obj = (struct KthLargest*)malloc(sizeof(struct KthLargest));
    obj->heap = (int*)malloc(sizeof(int) * (k + 1));
    obj->heapSize = 0;
    obj->k = k;
    return obj;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(int *heap, int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (heap[parent] > heap[index]) {
            swap(&heap[parent], &heap[index]);
            index = parent;
        } else break;
    }
}

void heapifyDown(int *heap, int size, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && heap[left] < heap[smallest]) smallest = left;
    if (right < size && heap[right] < heap[smallest]) smallest = right;

    if (smallest != index) {
        swap(&heap[smallest], &heap[index]);
        heapifyDown(heap, size, smallest);
    }
}

int KthLargestAdd(struct KthLargest* obj, int val) {
    if (obj->heapSize < obj->k) {
        obj->heap[obj->heapSize++] = val;
        heapifyUp(obj->heap, obj->heapSize - 1);
    } else if (val > obj->heap[0]) {
        obj->heap[0] = val;
        heapifyDown(obj->heap, obj->heapSize, 0);
    }
    return obj->heap[0];
}

void KthLargestFree(struct KthLargest* obj) {
    free(obj->heap);
    free(obj);
}

int main() {
    int k, n, newScores;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Enter number of initial scores: ");
    scanf("%d", &n);

    int *nums = (int*)malloc(n * sizeof(int));
    printf("Enter %d test scores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    struct KthLargest* kth = KthLargestCreate(k);

    for (int i = 0; i < n; i++) {
        KthLargestAdd(kth, nums[i]);
    }

    printf("\nEnter number of new incoming scores: ");
    scanf("%d", &newScores);

    printf("Enter the new scores one by one:\n");
    for (int i = 0; i < newScores; i++) {
        int val;
        scanf("%d", &val);
        int kthLargest = KthLargestAdd(kth, val);
        printf("After adding %d, the %dth largest score is: %d\n", val, k, kthLargest);
    }

    free(nums);
    KthLargestFree(kth);

    return 0;
}
