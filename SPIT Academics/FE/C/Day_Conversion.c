#include <stdio.h>
int main()
{
  int a;
  printf("Enter the Toatal number of days: ");
  scanf("%d",&a);
  
  int years,updation,months,re_days;
  
  years = a / 365 ;
  updation = a % 365 ;
  months = updation / 30;
  re_days = updation % 30;
  
  printf("Years = %d",years);
  printf("\nMonths = %d",months);
  printf("\nDays = %d",re_days);
  printf("\n");
  
  return 0;
  }
