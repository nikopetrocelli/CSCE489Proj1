/*************************************************************************************
 * myshell - student code for Project 1 of CSCE 489 
 * Niko Petrocelli
 *
 *************************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "shellfuncts.h"

int input(char*string){
	
	//scan for input until new line is uncountered, discard new line and put chars in string
	scanf("%[^\n]%*c", string);
	
	return 0;

}

void quit(){

	//say goodbye
	printf("\n\n\nGoodbye!\n\n\n");
	//wait for message to be read
	sleep(1);
	//Clean up our mess by clearing out the console
	system("clear");
	//Quit the program;
	exit(0);
	
}

int main(int argv, const char *argc[]) {
	(void) argv; // Make compile warnings go away - be sure to delete this line if you use the param
	(void) argc; // Make compile warnings go away - be sure to delete this line if you use the param
	
	//Define all the commands to be used here
	const char* halt = "halt";

	// If they just ran myshell, say Hello World--if they included a parameter, speak Australian
	/*if (argv == 1)
		hello(1);
	else
		hello(0);*/
	
	//Initialize the shell	
	printf("\n\n\n****************************************************");
	printf("\n\n\nWelcome to Niko's Shell\n\n\n");
	printf("******************************************************\n\n\n");
	//wait a bit
	sleep(2);
	//clear the screen
	system("clear");
	printf("\n Input a command \n");
	
	char string[20];
	//input(string);
	
	//printf("\n%s", string, "\n");

		//delete this it was for debugging
		//printf("\n%s", halt, "\n");
		
		//if(strcmp(string, halt) == 0)
		//	printf("\nhi");
	

	
	
	while (1){
	
		input(string);
		printf("\n%s", string, "\n");
		printf("\n%s", halt, "\n");
		
		if(strcmp(string, halt) == 0)
			quit();
		else{
		 printf("\n\n\nNot a valid command please try again.\n\n\n");
		 input(string);
		 }
	
	
	
	
	
	
	}
	quit();

}


