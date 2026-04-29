#include<stdio.h>
int fact(int a);
int main()
{
  int b;
  printf("Enter a number: ");
  scanf("%d",&b);
  
  fact(b);


  return 0;
}



int fact(int a)
{
 
  int ans = 1;
  for(int i=1;i<=a;i++)
  {
    ans = ans*i;    
  }
  printf("%d\n",ans);
  return 0;
}
