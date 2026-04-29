#include <stdio.h>
int main()

{
    float a,b,c,d,e; 
    a = 98.69;    /*These are marks */
    b = 56.40;
    c = 95.66;
    d = 85.36;
    e = 79.36;
    float avg = (a+b+c+d+e)/500; // odtained/Total * 100
    float per = avg*100;
    printf("The total percentage is  %f",per);

    return 0;
}