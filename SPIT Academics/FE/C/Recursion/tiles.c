

// Function to find the largest power of 2 less than or equal to a number
int largestPowerOf2(int x) {
    int power = 1;
    while (power * 2 <= x) {
        power *= 2;
    }
    return power;
}

// Recursive function to calculate the minimum number of tiles
int minTiles(int L, int B) {
    // Base case: if the area is zero, no tiles are required
    if (L == 0 || B == 0) {
        return 0;
    }

    // Find the largest tile that fits in the current dimensions
    int largestTile = largestPowerOf2(L < B ? L : B);

    // Calculate remaining dimensions and recurse
    return 1 + minTiles(L - largestTile, largestTile) + minTiles(L, B - largestTile);
}

int main() {
    int L, B;

    // Input dimensions of the room
    printf("Enter the length (L) and breadth (B) of the room: ");
    scanf("%d %d", &L, &B);

    // Calculate and print the minimum number of tiles required
    int result = minTiles(L, B);
    printf("Minimum number of tiles required: %d\n", result);

    return 0;
}


