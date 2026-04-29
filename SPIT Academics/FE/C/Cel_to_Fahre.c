#include <stdio.h>
int main()
{
  float a,out;
  printf("Enter the Temperature in Celcius: ");
  scanf("%f",&a);
  
  out = (a*9/5)+32; 
  
  printf("Temperature in fahrehiet = %.2f",out);
  printf("\n");

return 0;
}
