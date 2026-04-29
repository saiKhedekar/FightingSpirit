#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()

{
  char in;
  
  printf("Enter your first name: ");
  scanf("%c",&in);

 if(isalpha(in))
 {
  printf("%c is a letter \n",in);
 }
 else
 {
 printf("It is not a letter\n");
 }
 
  if(isupper(in))
 {
  printf("%c is  Uppercase \n",in);
 }
 else
 {
 printf("It is not Upercase\n");
 }
 
  if(islower(in))
 {
  printf("%c is a Lower \n",in);
 }
 else
 {
 printf("It is not Lower\n");
 }
 
  if(isdigit(in))
 {
  printf("%c is a digit \n",in);
 }
 else
 {
 printf("It is not a digit\n");
 }
 
  if(isalnum(in))
 {
  printf("%c is a alnum \n",in);
 }
 else
 {
 printf("It is not a alnum\n");
 }


 if(isspace(in))
 {
  printf("%c has space \n",in);
 }
 else
 {
 printf("It is not has space\n");
 }
 
printf("To lowercase is %c\n",tolower(in));
printf("To Uppercase is %c\n",toupper(in));
return 0;
}

