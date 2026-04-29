#include <stdio.h>
#include <math.h>
int main()

{
  float x1,x2,y1,y2;
  printf("Enter x1: ");
  scanf("%f",&x1);
  
  printf("Enter y1: ");
  scanf("%f",&y1);
  
    printf("Enter x2: ");
    scanf("%f",&x2);
  
    printf("Enter y2: ");
    scanf("%f",&y2);
  
  float a,b,c,d,add,ans;
  a = x2-x1;
  b = y2-y1;
  c = pow(a,2);
  d = pow(b,2);
  add = c + d;
  ans = sqrt(add);
  
printf("The Distance between the two point is %f",ans);
printf("\n");

return 0;
}
