#include <stdio.h>
#include <string.h>
int main()

{
 char str[ 50 ];
 char l1[50] = "A" ;
 char l2 [50] = "B" ;

 int i;

 for (i=1;i<=5; i++)
    {
     strcpy (str, l2);
     strcat (str, l1);
     printf ("%s\n", str);
     strcpy (l1, l2);
     strcpy(l2, str);
 }

 return 0;

}

