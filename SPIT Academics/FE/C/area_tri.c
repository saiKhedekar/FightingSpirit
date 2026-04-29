#include <stdio.h>
#include <math.h>
void ans( float a,float b,float c);
int main()
{
 float p,q,r;
 printf("Enter Sides: ");
 scanf("%f %f %f",&p ,&q ,&r);

 ans(p,q,r);

 return(0);

}


void ans( float a,float b,float c)
{ 
  float cal,sqroot;
  float s =(a+b+c)/2;
  cal = s*(s-a)*(s-b)*(s-c);
  sqroot = sqrt(cal);
  float d = sqroot;
  printf("The area is %f\n" ,d);
  
}
