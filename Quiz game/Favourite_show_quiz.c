#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include "main.h"

int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     
char text[] = "\t\t\t>>>>>>>>>>>>THE OFFICE QUIZ GAME<<<<<<<<<<<<<<<\n";
    for (int i = 0; text[i] != '\0'; i++) {
        putchar(text[i]);
        fflush(stdout);
        Sleep(50); // pause for 50 milliseconds before printing the next character
    }
     printf("\n\t\t   _____________________________________________________");

     printf("\n\t\t\t                   WELCOME  ");
     printf("\n\t\t\t                     to     ");
     printf("\n\t\t\t                  THE  GAME ");
     printf("\n\t\t   _____________________________________________________");
     printf("\n\t\t   _____________________________________________________");
     printf("\n\t\t          HOW WELL DO YOU KNOW THE SHOW!!!!!!!!!     ");
     printf("\n\t\t  _____________________________________________________");
     printf("\n\t\t  _____________________________________________________");
     printf("\n\t\t           > Press S to start the game");
     printf("\n\t\t           > Press V to view the highest score  ");
     printf("\n\t\t           > Press R to reset score");
     printf("\n\t\t           > press H for help            ");
     printf("\n\t\t           > press Q to quit             ");
     printf("\n\t\t  ____________________________________________________\n\n");
     
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tinsert Player name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to The Office Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 6 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 3");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 10,000points!");
    printf("\n    By this way you can win upto ONE MILLION points!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press a, b ,c or d for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST Shrutians !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=6;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("Question 1: What does Dwight use as a weapon during a game of 'Office Olympics' in the episode 'Office Olympics'?\n a) A stapler \n b) A pair of scissors \n c) A paper clip \n d) A ruler\n");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is c.A paper clip");
		           getch();
		       break;
		       }

        case 2:
		printf("Question 2: What does Michael Scott burn his foot on in the episode 'The Injury'?\n a) A George Foreman Grill \n b) A hot plate \n c) A space heater \n d) A toaster\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is a.George Foreman Grill");
		       getch();
		       break;}

        case 3:
		printf("Question 3: What does Jim put in Dwight's stapler in the episode 'Stress Relief'?\n a) Jell-O \n b) Gravy \n c) Mashed potatoes \n d) Pudding\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is a.Jell-O");
		       getch();
		       break;}

        case 4:
		printf("Question 4: What is the name of the movie that Michael screens for the office in the episode 'Movie Monday'?\n a) Die Hard \n b) The Terminator \n c) Indiana Jones and the Temple of Doom \n d) Faces of Death\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is d.Faces of Death");
		       getch();
		       break;}

        case 5:
        printf("Question 5: In the episode 'Local Ad,' what does Dwight create as his contribution to the Dunder Mifflin commercial?\n a) A robot \n b) A spaceship \n c) A giant stapler \n d) A giant pencil\n");
        if (toupper(getch())=='C')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is c.A giant stapler");
		       getch();
		       break;}

        case 6:
		printf("Question 6: In the episode 'Casino Night,' what confession does Jim make to Pam?\n a) That he is in love with her \n b) That he is moving away \n c) That he is quitting Dunder Mifflin \n d) That he is secretly a millionaire\n");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is a.That he is in love with her");
		       getch();
		       break;}}
		       }

	if(count>=3)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=16;i++)
     {system("cls");
     r=i;

switch (r) {
  case 7:
    printf("\n\nQuestion 7: What is the name of the fictional paper company that the show is centered around?");
    printf("\n\nA. Dunder Mifflin\t\tB. Scranton Paper Co.\n\nC. Dundler Paper Co.\t\tD. Michael Scott Paper Co.");
    if (toupper(getch())=='A') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is A. Dunder Mifflin");
      getch();
      goto score;
      break;
    }
  
  case 8:
    printf("\n\nQuestion 8: What is the name of the actor who played Michael Scott on the show?");
    printf("\n\nA. Steve Carrell\t\tB. John Krasinski\n\nC. Rainn Wilson\t\tD. Ed Helms");
    if (toupper(getch())=='A') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is A. Steve Carrell");
      getch();
      goto score;
      break;
    }
  
  case 9:
    printf("\n\nQuestion 9: What is the name of the company that bought out Dunder Mifflin in the later seasons?");
    printf("\n\nA. Sabre\t\tB. Staples\n\nC. Office Depot\t\tD. Amazon");
    if (toupper(getch())=='A') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is A. Sabre");
      getch();
      goto score;
      break;
    }

    case 10:
    printf("Question 10: In the episode 'Diversity Day,' what race does Michael imitate in his inappropriate Chris Rock routine?\n\n");
    printf("A. Black\t\tB. Asian\n\nC. Hispanic\t\tD. Native American\n\n");
    if (toupper(getch()) == 'A') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is A. Black");
      getch();
      goto score;
      break;
    }

       case 11:
    printf("Question 11: In the episode 'Basketball,' what item does Roy bring to the game that Jim forgets?\n\n");
    printf("A. His basketball shoes\t\tB. His lucky headband\n\nC. His water bottle\t\tD. His jersey\n\n");
    if (toupper(getch()) == 'D') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is D. His jersey");
      getch();
      goto score;
      break;
    }


		case 12:
    printf("\n\n Question 12: What is the name of the building where Dunder Mifflin Scranton is located?");
    printf("\n\nA. Scranton Business Park\t\tB. Vance Industrial Park\n\nC. Schrute Farms\t\tD. Stanley Business Plaza");
    if (toupper(getch())=='A') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is A. Scranton Business Park");
      getch();
      goto score;
      break;
    }

case 13:
    printf("\n\nQuestion 13: What is the name of the receptionist at Dunder Mifflin Scranton?");
    printf("\n\nA. Angela Martin\t\tB. Pam Beesly\n\nC. Phyllis Lapin\t\tD. Karen Filippelli");
    if (toupper(getch())=='B') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is B. Pam Beesly");
      getch();
      goto score;
      break;
    }

case 14:
    printf("\n\nQuestion 14 :What is the name of the salesman who is known for his pranks and sarcasm?");
    printf("\n\nA. Jim Halpert\t\tB. Dwight Schrute\n\nC. Stanley Hudson\t\tD. Kevin Malone");
    if (toupper(getch())=='A') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is A. Jim Halpert");
      getch();
      goto score;
      break;
    }

case 15:
    printf("\n\nQuestion 15: What is the name of Michael Scott's former assistant, who is often teased by his coworkers?");
    printf("\n\nA. Ryan Howard\t\tB. Kelly Kapoor\n\nC. Erin Hannon\t\tD. Toby Flenderson");
    if (toupper(getch())=='D') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is D. Toby Flenderson");
      getch();
      goto score;
      break;
    }

case 16:
    printf("\n\nQuestion 16: What is the name of the character who is the head of the accounting department at Dunder Mifflin Scranton?");
    printf("\n\nA. Angela Martin\t\tB. Kevin Malone\n\nC. Oscar Martinez\t\tD. Meredith Palmer");
    if (toupper(getch())=='C') {
      printf("\n\nCorrect!!!");
      countr++;
      getch();
      break;
    } else {
      printf("\n\nWrong!!! The correct answer is C. Oscar Martinez");
      getch();
      goto score;
      break;
    }}}

	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t\t\t\t YOU WIN A GIFT CERTIFICATE TO EXPLORE SHRUTE FARMS!!!!!!!!!");

  }else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU WIN A GIFT CERTIFICATE TO EXPLORE SHRUTE FARMS!!!!!!!!!");
	   
	}
	 else
{
	 printf("\n\n\t******** SORRY,bETTER LUCK NEXT TIME ********");
	    printf("\n\t\t Thanks for participating");
	    printf("\n\t\t Try again?");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key to return to the main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has the Highest Score :%0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... The Office Quiz Game...........");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 3");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 10,000points!");
    printf("\n    By this way you can win upto ONE MILLION points!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press a, b ,c or d for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****Developed by Stephen Quarshie(RD)********");}

void edit_score(float score, char edit[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",edit,sc);
	    fclose(f);}}