 #include <stdio.h>
 int main()
 {
     int a,b;
     printf("First number > Second number \n");
     printf("Enter the first number: ");//FIRST NUMBER 
     scanf("%d",&a);
     printf("Enter the second number: ");//SECOND NUMBER
     scanf("%d",&b);
     
     int remain,quotient;
     quotient = a/b;
     remain = a-(quotient*b); //METHOD 1
     int answer = a % b;     // METHOD 2
    
     
     printf("The remainder is %d",remain);
     printf(" \nThe remainder is %d",answer);
     
     return 0;
 }