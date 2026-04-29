
#include <stdio.h>

// Recursive function to print the pattern
void printPattern(int n, int step, int isAscending) {
    // Print the current number
    printf("%d ", n);

    // Base case: If we are back to the starting number and ascending, stop recursion
    if (n == step && isAscending) {
        return;
    }

    // Recursive step
    if (n > 0 && !isAscending) {
        // Descend: Decrease the number by step
        printPattern(n - step, step, 0);
    } else {
        // Ascend: Increase the number by step
        printPattern(n + step, step, 1);
    }

    // Print the current number again during backtracking
    if (isAscending) {
        printf("%d ", n);
    }
}

int main() {
    int n;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &n);

    // Print the pattern
    printPattern(n, 5, 0);

    return 0;
}
