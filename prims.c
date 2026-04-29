#include <stdio.h>

#define INF 9999
#define MAX 10

int main() {
    int n = 5;
    int graph[5][5] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };

    int selected[MAX], key[MAX], parent[MAX];

    for (int i = 0; i < n; i++) {
        selected[i] = 0;
        key[i] = INF;
        parent[i] = -1;
    }

    key[0] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = -1;
        for (int i = 0; i < n; i++)
            if (!selected[i] && (u == -1 || key[i] < key[u]))
                u = i;

        selected[u] = 1;

        for (int v = 0; v < n; v++)
            if (graph[u][v] && !selected[v] && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                parent[v] = u;
            }
    }

    printf("Edge   Weight\n");
    int total = 0;
    for (int i = 1; i < n; i++) {
        printf("%d - %d    %d\n", parent[i], i, graph[parent[i]][i]);
        total += graph[parent[i]][i];
    }
    printf("Total MST weight: %d\n", total);
}