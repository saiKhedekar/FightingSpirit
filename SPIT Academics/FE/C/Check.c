#include <stdio.h>
int main()
{
   char use,a;
   int pass,b;
   
   use = 's';
   pass = 123;

	printf("Enter Usernmame: ");
	scanf("%c",&a);
	
	printf("Enter password: ");
	scanf("%d",&b);
	
	
	if(use == a && pass == b)
	{
		printf("Access Granted\n");	
	}
	
	else
	{
		if(use == a && pass !=b)
		{
			printf("Password Incorrect\n");
		}
		
		else if(use !=a && pass == b)
		{
			printf("Username Incorrect\n");
		}
		
		else
		{
			printf("Username and password Incorrect\n");
		}
	
	
	}

return 0;
}
