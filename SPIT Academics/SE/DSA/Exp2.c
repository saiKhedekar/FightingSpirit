#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int *arr;
    int front, rear;
    unsigned capacity;
};

struct Queue* CreateQueue(unsigned capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = -1;
    queue->arr = (int*)malloc(sizeof(int) * capacity);
    return queue;
}

int isFull(struct Queue* queue) {
    return queue->rear == queue->capacity - 1;
}

int isEmpty(struct Queue* queue) {
    return queue->rear < queue->front;
}

void enqueue(struct Queue* queue, int data) {
    if (!isFull(queue)) {
        queue->arr[++queue->rear] = data;
    } else {
        printf("Queue is full!\n");
    }
}

int dequeue(struct Queue* queue) {
    if (!isEmpty(queue)) {
        return queue->arr[queue->front++];
    } else {
        printf("Queue is empty!\n");
        return -1;
    }
}

void MinMax(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    int min = queue->arr[queue->front];
    int max = queue->arr[queue->front];

    for (int i = queue->front; i <= queue->rear; i++) {
        if (queue->arr[i] > max) max = queue->arr[i];
        if (queue->arr[i] < min) min = queue->arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
}

int main() {
    struct Queue* queue = CreateQueue(10);
    int data;

    printf("Enter 10 numbers for the queue:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data);
        enqueue(queue, data);
    }

    MinMax(queue);

    free(queue->arr);
    free(queue);

    return 0;
}
