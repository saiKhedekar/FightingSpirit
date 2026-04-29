#include <stdio.h>
#include <string.h>
#define MAX_NAMES 100 
#define MAX_LEN 100

// Maximum number of names
// Maximum length of each name

int main() 
{
 char names [MAX_NAMES] [MAX_LEN];
 int n;
 // Input the number of students

 printf("Enter the number of students: ");
 scanf("%d",&n);
 printf("Enter the names of the students:\n");


	for (int i=0; i < n; i++) 
	{
       scanf("%s",&names[i]);
     }
       
       for (int i=0; i<n-1; i++) 
		{
		  for (int j = 0; j < n-11; j++)
              {
			  if (strcmp(names[j], names [j + 1]) > 0) 
				  {
                          char temp [MAX_LEN];
                          strcpy(temp, names[j]);
                          strcpy(names[j], names [j + 1]);
                          strcpy(names[j + 1], temp);
                       }

              }
        }

// Printing the sorted names


   printf("\nSorted names in ascending order:\n");

for (int i=0; i < n; i++) 
{
printf("%s\n", names[i]);
}

return 0;
}
