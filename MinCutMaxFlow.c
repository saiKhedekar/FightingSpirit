#include <stdio.h>
#include <limits.h>
#include <string.h>

#define V 6

int bfs(int rGraph[V][V], int s, int t, int parent[]) {
    int visited[V] = {0};
    int queue[V], front = 0, rear = 0;

    queue[rear++] = s;
    visited[s] = 1;
    parent[s] = -1;

    while (front < rear) {
        int u = queue[front++];

        for (int v = 0; v < V; v++) {
            if (!visited[v] && rGraph[u][v] > 0) {
                queue[rear++] = v;
                parent[v] = u;
                visited[v] = 1;
            }
        }
    }

    return visited[t];
}

int fordFulkerson(int graph[V][V], int s, int t) {
    int u, v;

    int rGraph[V][V];
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            rGraph[u][v] = graph[u][v];

    int parent[V];
    int max_flow = 0;

    while (bfs(rGraph, s, t, parent)) {

        int path_flow = INT_MAX;

        printf("Augmenting Path: ");
        int path[V], idx = 0;

        for (v = t; v != s; v = parent[v]) {
            path[idx++] = v;
            u = parent[v];
            if (rGraph[u][v] < path_flow)
                path_flow = rGraph[u][v];
        }
        path[idx++] = s;

        // print path
        for (int i = idx - 1; i >= 0; i--)
            printf("%d ", path[i]);
        printf("\n");

        printf("Bottleneck = %d\n\n", path_flow);

        for (v = t; v != s; v = parent[v]) {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}

int main() {
    int graph[V][V] = {
        {0,16,13,0,0,0},
        {0,0,10,12,0,0},
        {0,4,0,0,14,0},
        {0,0,9,0,0,20},
        {0,0,0,7,0,4},
        {0,0,0,0,0,0}
    };

    int max_flow = fordFulkerson(graph, 0, 5);

    printf("Maximum Flow = %d\n", max_flow);

    return 0;
}