#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define N 3

int minCost = INT_MAX;
int bestAssign[N];

int calculateBound(int costMatrix[N][N], int level, bool used[]) {
    int bound = 0;

    for (int i = level + 1; i < N; i++) {
        int min = INT_MAX;
        for (int j = 0; j < N; j++) {
            if (!used[j] && costMatrix[i][j] < min) {
                min = costMatrix[i][j];
            }
        }
        bound += min;
    }
    return bound;
}

void solve(int costMatrix[N][N], int level, int currentCost, bool used[], int assign[]) {

    if (level == N) {
        if (currentCost < minCost) {
            minCost = currentCost;
            for (int i = 0; i < N; i++)
                bestAssign[i] = assign[i];
        }
        return;
    }

    for (int j = 0; j < N; j++) {
        if (!used[j]) {

            used[j] = true;
            assign[level] = j;
            int newCost = currentCost + costMatrix[level][j];
            int bound = newCost + calculateBound(costMatrix, level, used);

            if (bound < minCost) {
                solve(costMatrix, level + 1, newCost, used, assign);
            }

            used[j] = false;
        }
    }
}

int main() {
    int costMatrix[N][N] = {
        {9, 2, 7},
        {6, 4, 3},
        {5, 8, 1}
    };

    bool used[N] = {false};
    int assign[N];

    solve(costMatrix, 0, 0, used, assign);

    printf("Optimal Assignment:\n");
    for (int i = 0; i < N; i++) {
        printf("Job %d -> Worker %d\n", i + 1, bestAssign[i] + 1);
    }

    printf("Minimum Cost = %d\n", minCost);

    return 0;
}
