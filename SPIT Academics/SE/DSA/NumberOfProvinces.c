#include <stdio.h>
#include <stdlib.h>

#define MAX 200

struct Node {
    int city;
    struct Node* next;
};

struct Graph {
    int n;
    struct Node* adjList[MAX];
};

void initGraph(struct Graph* graph, int n) {
    graph->n = n;
    for (int i = 0; i < n; i++)
        graph->adjList[i] = NULL;
}

void addEdge(struct Graph* graph, int i, int j) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->city = j;
    newNode->next = graph->adjList[i];
    graph->adjList[i] = newNode;
}

void dfs(struct Graph* graph, int city, int visited[MAX]) {
    visited[city] = 1;
    struct Node* temp = graph->adjList[city];
    while (temp != NULL) {
        if (!visited[temp->city])
            dfs(graph, temp->city, visited);
        temp = temp->next;
    }
}

int findCircleNum(int isConnected[MAX][MAX], int n) {
    struct Graph graph;
    initGraph(&graph, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && isConnected[i][j] == 1)
                addEdge(&graph, i, j);
        }
    }

    int visited[MAX] = {0};
    int provinceCount = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(&graph, i, visited);
            provinceCount++;
        }
    }

    for (int i = 0; i < n; i++) {
        struct Node* temp = graph.adjList[i];
        while (temp != NULL) {
            struct Node* toFree = temp;
            temp = temp->next;
            free(toFree);
        }
    }

    return provinceCount;
}

int main() {
    int n;
    int isConnected[MAX][MAX];

    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element[%d][%d]: ",(i+1), (j+1));
            scanf("%d", &isConnected[i][j]);
        }
    }

    int result = findCircleNum(isConnected, n);
    printf("Number of Provinces: %d\n", result);

    return 0;
}
