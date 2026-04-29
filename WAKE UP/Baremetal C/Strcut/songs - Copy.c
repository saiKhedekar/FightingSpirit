#include <stdio.h>
#include "songs.h"

// The function dateasString() converts a date from structure of type 
// struct Date into a string  of the form mm/dd/yyyy
// Arguement:  A date value of type struct Date.
// Return value :  A pointer to a static buffer contining the date string.

const char *dateAsSting ( struct Date d )
{
		static char strDate[12];
		sprintf(strDate, "%0.2d/%02d/%04d", d.month, d.day, d.year ); // The sprintf function in C is used to format and store a string
	
		return strDate;
}

// The printSong() function prints out the concepts of a structure 
// of type Song_t in a tabular format.
// Argument: A pointer to the structure object to be printed 
// Return vvalue : none

void printSong ( const Song_t *pSong )
{
	int m = pSong->duration / 60,   // Playing time in minutes 
	s = pSong->duration % 60;       // and seconds.
	
	printf("--------------------------------------------------\n"
				 "Title:         %s\n"
				 "Artist:        %s\n"
				 "Composer: 		 %s\n"
				 "Playing time:	 %d:%02d\n "
				 "Date:   			 %s\n",
					pSong->title, pSong->artist, pSong->composer, m, s,
					dateAsSting( pSong->published ));

}