#include <stdio.h>

int romanise(int y, int k, char ch);
int main(){
int yr;
printf("Enter the year: ");
scanf("%d", &yr);
yr = romanise(yr, 1000, 'M');
yr = romanise(yr, 500, 'D');
yr = romanise(yr, 100, 'C');
yr = romanise(yr, 50, 'L');
yr = romanise(yr, 10, 'X');
yr = romanise(yr, 5, 'V');
yr = romanise(yr, 1, 'I');
printf("\n");
return 0;
}
int romanise(int y, int k, char ch){
int j = y/k;
int z;
for(int i=1; i<=j; i++){
printf("%c", ch);
}
return(z=y%k);
}
