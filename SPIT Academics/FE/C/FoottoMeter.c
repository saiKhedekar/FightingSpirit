#include <stdio.h>
int main()
{
  float ft,meter;
  printf("Enter Length in foot: ");
  scanf("%f",&ft);
  
  meter = ft * 0.348;
  
  printf("Length in Meter = %.3f",meter);
  printf("\n"); 
  return 0;
 }
