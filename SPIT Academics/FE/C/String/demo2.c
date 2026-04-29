#include <stdio.h>
#include <stdlib.h>

int main()
{
 char intStr[] = "123";
 char floatStr[] = "12.3";
 
 int num = atoi(intStr);
 long  longNum = atol(intStr);
 float floatNum = atof(floatStr);
 
 printf("Using atoi: %d\n",num);
 printf("Using atol: %d\n",longNum);
 printf("Using atolf: %.2f\n",floatNum);

 char buffer[50];
 int day = 25, month = 11 , year = 2024;
 
 sprintf(buffer, "Date: %0.2d/%0.2d/%0.4d ", day , month , year);
 printf("Using sprintf: %s\n",buffer);


// Demonstrating sscanf

 char inputStr[] = "11 22.2 Hello";
 int intValue;
 double doubleValue;
 char word [20];
 
 
 sscanf(inputStr, "%d%lf%s", &intValue, &doubleValue, word);
 printf("Using sscanf:\n");

 printf("input str: %s\n", inputStr);
 printf("Extracted integer: %d\n", intValue);
 printf("Extracted double: %.2f\n", doubleValue);
 printf("Extracted string: %s\n", word);

return 0;
 
}
