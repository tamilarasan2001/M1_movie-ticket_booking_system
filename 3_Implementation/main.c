#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addMov();
void dispMov();
void findMov();
void showmovie();

struct book
{ 
	int mnum;
	char customername[201];
	char moviename[20];
	char mdate[12];
	int mtimehour;
	int mtime;
	char ttype[30];
	int guestsnum;
	int housenum;
	int fee;
}
;
void main()
{	
	int option;
	printf("\n\t Welcome to Movie Ticket Booking System \n");
	do
	{
		printf("\n\n            Main Menu                      \n");
		printf("\n  Add New Movie Booking Records\n");
		printf("\n  Display All Movie Booking Records\n");
		printf("\n  Search Movie Booking Record(s)\n");
		printf("\n  All Movies\n");
		printf("\n  Quit\n");
		printf("\nWhat is your option (1-5)? ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				addMov(); 
				break;
			case 2:
				dispMov(); 
				break;
		
			case 3:
				findMov(); 
				break;
		
			case 4:
				showmovie();
				break;
			case 5:
				printf(" Thank you See you next time :)");
				exit(0);
				break;
			default:
				printf("Please select a correct number (1-5)!");
		}
	} while(option!=5);
}

