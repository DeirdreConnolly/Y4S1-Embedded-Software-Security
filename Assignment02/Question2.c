#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void mark()
{
	volatile int grade;
	char buff[48];


	printf( "Enter student grade (integer values only) followed by student name: " );
	//Separate the grade and name by a space: e.g. "9001 Son Goku"
	scanf("%d %[^\n]", &grade, buff);

	printf( "Student name entered: " );
	printf( buff );
	printf( "\n" );


	if( grade >= 70 )
	{
		printf( "Invalid Grade Entered: no students are permitted to get a H1!\n" );
	}
	else
	{
		printf( "Grade of %d assigned.\n", grade );
	}

	exit(1);
}

int main(int argc, char **argv)
{
  mark();
}



