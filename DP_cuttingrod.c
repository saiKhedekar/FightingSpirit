#include <stdio.h>
#include <limits.h>


int cutRod(int price[], int n) {
   int dp[n + 1];
   int cut[n + 1];


   dp[0] = 0;


   for (int i = 1; i <= n; i++) {
       int max_val = INT_MIN;


       for (int j = 0; j < i; j++) {
           int current = price[j] + dp[i - j - 1];


           if (current > max_val) {
               max_val = current;
               cut[i] = j + 1;
           }
       }


       dp[i] = max_val;
   }


   printf("Cuts made: ");
   int length = n;
   while (length > 0) {
       printf("%d ", cut[length]);
       length = length - cut[length];
   }
   printf("\n");


   return dp[n];
}


int main() {
   int n;


   printf("Enter the length of the rod: ");
   scanf("%d", &n);


   int price[n];
   printf("Enter %d prices for pieces of length 1 to %d:\n", n, n);


   for (int i = 0; i < n; i++) {
       printf("Price for length %d: ", i + 1);
       scanf("%d", &price[i]);
   }


   int maxProfit = cutRod(price, n);


   printf("Maximum Obtainable Revenue: %d\n", maxProfit);


   return 0;
}
