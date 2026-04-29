#include <stdio.h>
void move( int , char , char , char);
int main()
{
  int n = 3;
  move (n, 'A', 'C', 'B');
return 0;
}

void move(int n , char sp, char ap, char ep)
{
  if(n == 1)
  {
  	printf("Move from %c to %c\n",sp,ep);
  }
  else
  {
  	move (n-1,sp,ep,ap);
  	move (1,sp,' ',ep);
  	move (n-1, ap,sp,ep);
  }

}
