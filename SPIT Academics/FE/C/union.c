#include <stdio.h>
#include <string.h>
int main()
{
 struct employ
 {
    char name [30];
    char address[50];
    int id ;
    int mar;
 }; 
 
  struct employ e1;
  printf("Enter name: ");
  gets(e1.name);
  
  printf("Enter address: ");
  gets(e1.address);
  
  printf("Enter id: ");
  scanf("%d",&e1.id);
  
  printf("Enter marriage statues if yes enter 1 and if no enter 0\n");
  scanf("%d",&e1.mar);
  
  if()
  
 
 puts(e1.name);
 puts(e1.address);
 printf("%d\n",e1.id);
 printf("%d",e1.mar);
    return 0;
}


