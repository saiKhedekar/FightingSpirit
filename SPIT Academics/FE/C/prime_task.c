#include <stdio.h>
#include <stdbool.h>
int task_1();
int task_2(int p, int q);
int task_3();
int task_4(int r, int s);
int prime(int n);
int gcd(int x,int y);
int main()
{ 
 int m,num1,num2;
    printf("Choose one of the following tasks to perform\n");
    printf("Task#1: Print all prime numbers between 100 and 200\n");
    printf("Task#2: Find and print all twin primes in a user-defined range [A, B].\n");
    printf("Task#3: Print numbers in the range from 1 to 10, with an asterisk (*) in front of prime numbers.\n");
    printf("Task#4: Check if two given numbers are relatively prime.\n");
    printf("Enter Task number: ");
 scanf("%d",&m);
 
	switch(m)
	{
	  case 1:
	  int a = task_1(); 
	  printf("\n");
 	  break;
 	  
	  case 2:
	  printf("Enter start limit: "); // start limit input
       scanf("%d",&num1);
        
       printf("Enter end limit: ");  // end limit input
       scanf("%d",&num2);
       printf("\n"); 
       
       int b = task_2(num1,num2);
 	  break;
 	  
	  case 3:
	  int c = task_3(); 
	  printf("\n");
 	  break;
 	  
	  case 4:
	  printf("Enter first number: "); // num1 input
       scanf("%d",&num1);
        
       printf("Enter second number: ");  // num2 input
       scanf("%d",&num2); 
       printf("\n");
       
	  int d = task_4(num1,num2); 
	  printf("\n");
 	  break;
 	  
	  default:
	  printf("Invalid input !!!\n");
	  printf("\n");
 	  break; 	  
 
 	}


return 0;
}

int task_1()
{
    for(int i = 100; i<=200; i++)
     {
         if (i%2==0)
           {
             printf(" ");
           }
         else
           {
             printf("%d",i);
           
           }
     }
  return 0;   
}




int task_2(int p, int q)
{
    printf("Twin primes between %d and %d are:\n",p ,q );
    for (int i = p; i <= q- 2; i++) 
    {
        if (prime(i) && prime(i + 2)) 
        {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
  
return 0;
 }
 
 
 
 int task_3()
 {
    for(int i = 100; i<=200; i++)
     {
         if (i%2==0)
           {
             printf(" ");
           }
         else
           {
             printf("%d*",i);
           
           }
     }
  return 0; 
 }
 
 
 
 
  int task_4(int r, int s)
 {
    if(gcd(r,s) == 1)
    {
        printf("They are relatively prime");
    }
    else
    {
        printf("They are NOT relatively prime");
    }
  return 0; 
 }
 
 int prime(int n)
 {
     if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) 
        {
            return false;
    
        }
    }
    return true;
     
 }
 
 int gcd(int x,int y)
 {
     while(y != 0)
     {
        int temp = y;
        y = x % y;
        x = temp;
     }
 return x;
 }
 
