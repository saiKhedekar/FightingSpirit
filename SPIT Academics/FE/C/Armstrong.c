#include <stdio.h>
#include<math.h>
void main()
{
 int x,c,a,sum,p,l,b;
 c=0;
 sum=0;

 printf("enter number to check:");
 scanf("%d",&x);
 
 l=x;
 b=x;
 
    while(l>0)
    {
    l=l/10;
    c+=1;
    }
  
  printf("no of digits: %d\n",c);
 
    while(b>0)
    {
    a=b%10;
    b=b/10;
    p=pow(a,c);
    sum+=p;
    }

printf("num is %d\n",sum);

    if(sum==x)
    {
        printf("number is armstrong:");
    }
    
    else
    {
        printf("number not armstrong:");
    }
    
  }
