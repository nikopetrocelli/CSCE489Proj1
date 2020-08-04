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


void process(char*string){
	
	//Define all the commands to be used here
	const char* halt = "halt";
	
	//Get the user's input
	input(string);
	
	//Check if it matches the commands here	
	if(strcmp(string, halt) == 0)
		quit();
	else{
		printf("\nNot a valid command please try again.\n");
		return;
	}


}

int main(int argv, const char *argc[]) {
	(void) argv; // Make compile warnings go away - be sure to delete this line if you use the param
	(void) argc; // Make compile warnings go away - be sure to delete this line if you use the param
	
	
	//Initialize the shell	
	printf("\n\n\n****************************************************");
	printf("\n\n\nWelcome to Niko's Shell\n\n\n");
	printf("******************************************************\n\n\n");
	//wait a bit
	sleep(2);
	//clear the screen
	system("clear");
	printf("\nInput a command \n");
	
	//Declare the max size for the user's input string, 50 is sufficient for this shell
	char string[50];
	
	
	while (1){
		
		//While we aren't told to exit, keep processing the input
		process(string);
		
	
	}


}


