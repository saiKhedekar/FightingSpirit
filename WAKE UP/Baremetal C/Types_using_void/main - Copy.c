#include "uart.h"
#include <time.h>
#include <stdlib.h> // Provides the following function prototypes:
										// void srand(unsigned int seed);
										// int rand(void);
										// void *malloc(size t size);
										// void free (void *ptr);
										// void exit(int status );
										
										
/*When to Use This Enum Style?
 When defining simple integer constants in a local scope.
 When you want a lightweight, compile-time constant without additional memory overhead.
 When you don't need const int (which may use memory in some cases).
 Enumerations are typically int type, so ARR LEN is type-safe compared to #define (which does a simple text) */

enum { ARR_LEN = 100 }; // anaonymns enumnerations that defines ARR_LEN as a contant with the value of 100

int main(void){

	uartInit();
		int i,						// Obtain some storage space 
			*pNumbers = malloc(ARR_LEN * sizeof(int));
		
		if( pNumbers == NULL)
		{
			fprintf( stderr, "Insuffiecint memory.\n");
			exit(1);
		}
		
		srand( (unsigned)time(NULL) );    // Initialize the random number generator
		
			for(int i = 0; i <ARR_LEN; ++i)
					pNumbers[i] = rand() % 10000;   //store some random numbers 

			printf("\n%d Random numbers between 0 and 9999: \n",ARR_LEN); // print one number per loop
		
			for(int i = 0; i < ARR_LEN; ++i )   // output loop 
			{
				printf("%6d", pNumbers[i]);  // print one number per loop
				if( i % 10 == 9) putchar('\n'); // iteration and a newline after every 10 numbers 
			}
			
			
			free( pNumbers );
			
			
			while(1)
			{
			
			}
		
}