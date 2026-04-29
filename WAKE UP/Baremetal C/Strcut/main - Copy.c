#include "uart.h"
#include <string.h>
#include "songs.h"

Song_t mySong = { "What it is" , " Mohammed rafi;mooo" , "MArk hemsworth" , 297, { 9, 26, 2000 } };
	
	
	Song_t yourSong = { "El Macho" };
	
	Song_t aSong = { .title = "I've Just Seen  A Face", 
									 .composer = "Johnh Lennon; Pauk McCartney",
									 127
	};
	
	
	int main(){
		
		uartInit();
		
		Song_t song1 = {""}, song2, // Two objects of type sing_t
			*pSong = &song1;         // and a pointer to Song_t
		
		// Copy a string to the title of song1 
		strcpy(song1.title, "Bankai");
		
		// Like wise for the composer member:
		strcpy(song1.composer, "Kurosaki Ichigo");
		
		song1.duration = 251;    // Playing time
		
		// The member published is itself a structure:
		
	song1.published.year = 1998;   //Year of publication
		if( pSong->duration > 180 )
		{
			printf("The song %s is more than 3 minutes long .\n", pSong->title);
			
		}
		
		song2 = song1 ;
		printSong( &song2);
		
		printSong( &mySong);
		printSong( &yourSong);
		printSong( &aSong);	
	}