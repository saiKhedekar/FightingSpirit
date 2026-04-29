#include <stdio.h>
int modify(int arr[10]);
int main()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
  modify(arr );
  
  printf("The modified array is as follows: \n");
  for(int i=0;i<=9;i++)
  {
  
  printf("%d\n",arr[i]); 
  }
  
return 0;
}

int modify(int arr[10])
{

  
  for(int i = 0;i<=9;i++)
  {
    arr[i] = arr[i]*3;
      
  }

return 0;
}
