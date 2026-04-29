#include <stdio.h>
#include <math.h>
int eqn1(){
int x, y;
float Z;

printf("Equation 1 selected: Z = ((x + 3) * x^3) / ((y - 4) * (y + 5))\n");
printf("Enter the values of x and y: ");
scanf("%d %d", &x, &y);
if(y == 4 || y == -5){
printf("Error: Division by zero condition encountered.");
}
else{
Z = ( (x + 3) * (pow(x, 3)) ) / ( (y - 4) * (y + 5) );
printf("The value of Z is: %.2f\n", Z);
}
return 1;
}
int eqn2(){
float c, d, g, v, R;
printf("Equation 2 selected: R = (2v + 6.22 * (c + d)) / (g + v)\n");
printf("Enter the values of c, d, g, v: ");
scanf("%f %f %f %f", &c, &d, &g, &v);
if(g == -v){
printf("Error: Division by zero condition encountered.");
}
else{
R = ((2 * v) + (6.22 * (c + d))) / (g + v);
printf("The value of R is: %.2f\n", R);
}
return 2;
}
int eqn3(){
float x, y, a, b, c, A;
printf("Equation 3 selected: A = 7.7b(xy + a)/c - 0.8 + 2b / ((x + a)(1/y))\n");
printf("Enter the values of x, y, a, b, c: ");
scanf("%f %f %f %f %f", &x, &y, &a, &b, &c);
if(c == 0 || x == -a || y == 0){
printf("Error: Division by zero condition encountered.");
}
else{
A = ((((7.7 * b) * ((x * y) + a)) / c) - 0.8 + (2 * b)) / ((x + a) * (1 / y));
printf("The value of A is: %.2f\n", A);
}
return 3;
}
int eqn4(){
float x, X;
printf("Equation 4 selected: X = 12x^3 / 4x + 8x^2 / 4x + x / 8x + 8 /8x \n");
printf("Enter the value of x: ");
scanf("%f", &x);
if(x == 0){
printf("Error: Division by zero condition encountered.");
}
else{
X = (12 * (pow(x, 3))) / (4 * x) + (8 * (pow(x, 2))) / (4 * x) + (x / (8 *
x)) + (8 / (8 * x));
printf("The value of X is: %.2f\n", X);
}

return 4;
}
int main()
{
int choice;
printf("Choose an equation to evaluate (1-4):\n");
printf("1. Z = ((x + 3) * x^3) / ((y - 4) * (y + 5))\n");
printf("2. R = (2v + 6.22 * (c + d)) / (g + v)\n");
printf("3. A = (7.7b(xy + a)/c - 0.8 + 2b) / ((x + a)(1/y))\n");
printf("4. X = (12x^3 / 4x + 8x^2 / 4x + x / 8x + 8 / 8x)\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
eqn1();
break;
case 2:
eqn2();
break;
case 3:
eqn3();
break;
case 4:
eqn4();
break;
default:
printf("Invalid choice! Please enter a number between 1 and 4.\n");
break;
}
return 0;
}
