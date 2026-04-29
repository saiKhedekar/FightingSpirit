#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


int memo[10000];
int last[10000];
int size;
int money[100];


int minCoins(int amount){


    if (amount == 0){
        return 0;
    }
    if(amount < 0){
        return INT_MAX;
    }


    if(memo[amount] != -1){
        return memo[amount];
    }


    int minCount = INT_MAX;
    int bestCoin = -1;


    for (int j = 0; j < size; j++) {


        if (money[j] <= amount) {


            int result = minCoins(amount - money[j]);


            if (result != INT_MAX && result + 1 < minCount) {
                minCount = result + 1;
                bestCoin = j;
            }


        }
    }


    memo[amount] = minCount;
    last[amount] = bestCoin;


    return memo[amount];
}


int main(){


    int amount;


    printf("Enter number of denominations: ");
    scanf("%d", &size);


    printf("Enter the denominations:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &money[i]);
    }


    printf("Enter the amount: ");
    scanf("%d", &amount);


    for (int i = 0; i <= amount; i++) {
        memo[i] = -1;
        last[i] = -1;
    }


    int result = minCoins(amount);


    if (result == INT_MAX) {
        printf("\nCannot form the amount using given denominations.\n");
        return 0;
    }


    printf("\nMinimum number of notes required: %d\n", result);


    int count[size];
    for (int i = 0; i < size; i++)
        count[i] = 0;


    int temp = amount;


    while (temp > 0) {


        int idx = last[temp];


        if (idx == -1) {
            printf("\nCannot form the amount using given denominations.\n");
            return 0;
        }


        count[idx]++;
        temp -= money[idx];
    }


    for (int i = 0; i < size; i++) {
        if (count[i] > 0) {
            printf("%d x %d = %d\n", money[i], count[i], money[i] * count[i]);
        }
    }


    return 0;
}


