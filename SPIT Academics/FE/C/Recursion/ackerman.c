
#include <stdio.h>

// Recursive function for Ackermann's function
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m, n;

    // Tabulating Ackermann's function values
    printf("Ackermann Function Table (A(m, n)):\n");
    printf("  n →\t");
    for (n = 1; n <= 10; n++) {
        printf("%4d ", n);
    }
    printf("\n");

    for (m = 1; m <= 4; m++) {
        printf("m=%d:\t", m);
        for (n = 1; n <= 10; n++) {
            printf("%4d ", ackermann(m, n));
        }
        printf("\n");
    }

    return 0;
}


