/*Count Vowels in a String Using Pointers
Write a function that takes a string and counts the vowels using only pointers (no indexing)*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char read(char*, int);

int main(void){

    int n = 6;
    char *ptr = malloc(n * sizeof(char));

    read(ptr, n);
    return 0;
}

char read(char *ptr, int n){
    
    int count = 0;
    printf("Enter the string: ");
    for (int i=0; i<n; i++){
        scanf("%c",ptr);
        
        *ptr = toupper((unsigned char)*ptr);
        if(*ptr == 'A' | *ptr == 'E' | *ptr == 'I' | *ptr == 'O' | *ptr == 'U' )
        {
            count++;
        }

        ptr++;
    }
printf("Total Vowels = %d\n",count);
}