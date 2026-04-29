#include <stdio.h>
#include <stdlib.h>

struct basics{
  int UID;
};

// Initiate functions
int readstruct(struct basics[], int);
int printstruct(struct basics[], int);

// Main functions
int main(void){

int n;
printf("Enter total number of students: ");
scanf("%d",&n);

struct basics cse[n];
// for reading the DATA call function
readstruct(cse, n);
printstruct(cse, n);

return 0;
}

// Function Defination
int readstruct(struct basics cse[], int n){
for(int i=0; i<n ; i++){
  scanf("%d",&cse[i].UID);
 }  
return 0;
}


int printstruct(struct basics cse[], int n){
for(int i=0; i<n ; i++){
  printf("%d\n",cse[i].UID);
 }
return 0;
}


