#include <stdio.h>

#define MAX 25

int parent[MAX];

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int x, int y) {
    parent[find(x)] = find(y);
}

int main() {
    int n = 5;
    int graph[5][5] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0},
    };

    // Extract all edges
    int edges[MAX][3], e = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (graph[i][j])
                edges[e][0] = graph[i][j], edges[e][1] = i, edges[e][2] = j, e++;

    // Sort edges by weight (bubble sort)
    for (int i = 0; i < e - 1; i++)
        for (int j = 0; j < e - i - 1; j++)
            if (edges[j][0] > edges[j+1][0]) {
                int tmp[3] = {edges[j][0], edges[j][1], edges[j][2]};
                edges[j][0] = edges[j+1][0]; edges[j][1] = edges[j+1][1]; edges[j][2] = edges[j+1][2];
                edges[j+1][0] = tmp[0];      edges[j+1][1] = tmp[1];      edges[j+1][2] = tmp[2];
            }

    // Initialize Union-Find
    for (int i = 0; i < n; i++)
        parent[i] = i;

    printf("Edge   Weight\n");
    int total = 0;
    for (int i = 0; i < e; i++) {
        int w = edges[i][0], u = edges[i][1], v = edges[i][2];
        if (find(u) != find(v)) {         // No cycle?
            unite(u, v);
            printf("%d - %d    %d\n", u, v, w);
            total += w;
        }
    }
    printf("Total MST weight: %d\n", total);
}