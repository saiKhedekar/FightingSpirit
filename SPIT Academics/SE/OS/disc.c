#include <stdio.h>
#include <stdlib.h>

// Sort function
void sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// CSCAN
void CSCAN(int req[], int n, int head, int disk_size) {
    int seek = 0;
    int temp[100], index = 0;

    for(int i = 0; i < n; i++)
        temp[i] = req[i];

    temp[n] = disk_size - 1; // 4999
    temp[n + 1] = 0;
    int size = n + 2;

    sort(temp, size);

    for(int i = 0; i < size; i++) {
        if(temp[i] >= head) {
            index = i;
            break;
        }
    }

    printf("\n--- CSCAN Calculations ---\n");

    // Move right
    for(int i = index; i < size; i++) {
        printf("%d -> %d = %d\n", head, temp[i], abs(temp[i] - head));
        seek += abs(temp[i] - head);
        head = temp[i];
    }

    // Jump to 0
    printf("%d -> %d = %d (Jump)\n", head, 0, abs(head - 0));
    seek += abs(head - 0);
    head = 0;

    // Remaining
    for(int i = 0; i < index; i++) {
        printf("%d -> %d = %d\n", head, temp[i], abs(temp[i] - head));
        seek += abs(temp[i] - head);
        head = temp[i];
    }

    printf("Total Seek Time (CSCAN): %d\n", seek);
}

// CLOOK
void CLOOK(int req[], int n, int head) {
    int seek = 0;
    int temp[100];

    for(int i = 0; i < n; i++)
        temp[i] = req[i];

    sort(temp, n);

    int index = 0;

    for(int i = 0; i < n; i++) {
        if(temp[i] >= head) {
            index = i;
            break;
        }
    }

    printf("\n--- CLOOK Calculations ---\n");

    // Move right
    for(int i = index; i < n; i++) {
        printf("%d -> %d = %d\n", head, temp[i], abs(temp[i] - head));
        seek += abs(temp[i] - head);
        head = temp[i];
    }

    // Jump to lowest request
    if(index > 0) {
        printf("%d -> %d = %d (Jump)\n", head, temp[0], abs(head - temp[0]));
        seek += abs(head - temp[0]);
        head = temp[0];
    }

    // Remaining
    for(int i = 1; i < index; i++) {
        printf("%d -> %d = %d\n", head, temp[i], abs(temp[i] - head));
        seek += abs(temp[i] - head);
        head = temp[i];
    }

    printf("Total Seek Time (CLOOK): %d\n", seek);
}

// Main
int main() {
    int req[] = {86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130};
    int n = sizeof(req) / sizeof(req[0]);
    int head = 143;
    int disk_size = 5000;

    CSCAN(req, n, head, disk_size);
    CLOOK(req, n, head);

    return 0;
}