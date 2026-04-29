#include <stdio.h>
void task_1();
void task_2();
void task_3();
void task_4();
void fact();
int main()
{
int in;
printf("Enter task number: \n");
scanf("%d",&in);

  switch (in)
  {
   case 1:
   task_1();
   break;
   
   case 2:
   task_2();
   break;
   
   case 3:
   task_3();
   break;
   
   case 4:
   task_4();
   break;
   
   default:
   printf("INVALID INPUT!!!\n");
   break;
   
 return 0;
}
  

void task_1()
{
  int a;
  printf("Enter n : ");
  scanf("%d",&a);
  
  int result = fact(a);
  printf("The factorial of %d is %d\n",a,result);

}

void fact()
{

}
