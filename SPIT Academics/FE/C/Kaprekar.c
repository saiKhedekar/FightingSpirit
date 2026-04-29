#include <stdio.h>
#include <math.h>
int main()
{
 int a,og_num,num,num2;
 printf("Enter a number: ");
 scanf("%d",&a);
 og_num=a;
 num = a;

 int num_sq;
 num_sq = pow(a,2);
 num2=num_sq;
 
 int count = 0;
 while(og_num>0)
  {
    og_num=og_num/10;
    count++ ;
  }
  
  printf("%d\n",count);
  printf("%d\n",num2);
  
  int split,b,split2;
  b = pow(10,count);
  split =num2 % b;
  split2=num2/b;
  
  printf("%d\n",split);
  printf("%d\n",split2);
  
  int add = split + split2;
  
  if(num == add)
  {
     printf("It is Kaprekar\n");
  }
  
  else
  {
     printf("It is NOT Kaprekar\n");
  }
  
 
return 0;
}
