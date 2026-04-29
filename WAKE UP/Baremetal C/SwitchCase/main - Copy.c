#include "uart.h"

#include <stdio.h>
#include <stdlib.h>
# include <ctype.h>

// Handle a command that the user slects from a menu 
// --------------------------------------------------------
// Declare other function used :

int menu( void );      // Prints the menu and returns
											// a charcter that the user types 
void action1( void );
void action2 ( void );

int main(){
	
	uartInit();
	
	_Bool done = 0;
	printf("\t alert \a\a\a\n"); // the \a generatesb thr tone
	
		while ( !done )  
		{
				switch ( menu() )		 // Jump depending on the result of menu()
				{
					case 'a': 
					case 'A': action1();  // carry out action1
									break;        // Dont do the other "actions."
					
					case 'b':
					case 'B': action2();  // Carry out action2
									break;				// Don't do thr default "action."
					
					case 'q':
					case 'Q': done = 1;
										puts ("\nQUIT");
										break;
					
					default: putchar('\a');  // If no recognised command 
				}													// output an alert 
				return EXIT_SUCCESS;
		}
}


void action1( void ) { puts("\naction1..."); } 
void action2( void ) { puts("\naction2..."); }  // puts adds a newline charcter automatically and does not allow formating 
																								// It is faster than printf 

int menu ( void )         // prints the menu and returns 
{													// a charcter that the user types.
		static char menuStr[] = 
			"\n               A = action1"
			"\n               B = action2"
			"\n 							Q = Quit the program"
			"\n Your Choice:  ";
		
			fputs ( menuStr, stdout ); // This prints the menu string to the console 
		
		
		int choice = 0;
		do 
		{
			
			if ( ( choice = getchar() )== EOF)
			{
				choice = 'Q';
			}
		}
		while ( isspace(choice) );
		
		
		return choice;
}	
