#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "myheader.h"
#include "myheader.c"
#define gotoxy(x, y) printf("\033[%d;%dH", (y), (x))
int choice();
int testpage();
void variable_choices(char *str);
int quiz();
void results(int);
int main(void)
{

	welcome();
	int c = -99;
	while (c != -1)
	{
		c = choice();
		if (c == 1)
		{
			intropage();
			two_variables();
			three_variables();
			four_variables();
		}
		int y = -99;
		if (c == 2)
		{
			y = testpage();
		}
		if (c == 3)
		{
			int s = quiz();
			results(s);
		}

		if (y == 1)
		{
			create_1();
		}
		else if (y == 2)
		{
			create_2();
		}
		else if (y == 3)
		{
			create_3();
		}
	}
	thankyou();
	return 0;
}
int choice()
{
	printf("\033[1;36m");
	printf("\t\t\t%c", 220);	  // upper-left corner
	for (int i = 1; i <= 40; i++) // upper border lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 220); // upper-right corner
	printf("\t\t\t%c 1.                                     %c\n", 219, 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line// left box line - text - rigfht box line
	printf("\t\t\t%c          ", 219);
	printf("\033[4;31m");
	printf("TUTORIAL ON K-MAPS"); // left box line - text - rigfht box line
	printf("\033[0m");
	printf("\033[1;36m");
	printf("            %c\n", 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c", 219);												  // lower-right corner
	for (int i = 1; i <= 40; i++)											  // lower box lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 219); // lower-right lines
	printf("\033[0m");
	//_________________________________________________________________
	printf("\033[1;36m");
	printf("\n\t\t\t%c", 220);	  // upper-left corner
	for (int i = 1; i <= 40; i++) // upper border lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 220); // upper-right corner
	printf("\t\t\t%c 2.                                     %c\n", 219, 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line// left box line - text - rigfht box line
	printf("\t\t\t%c        ", 219);
	printf("\033[4;31m");
	printf("K-MAP OF AN EXPRESSION"); // left box line - text - rigfht box line
	printf("\033[0m");
	printf("\033[1;36m");
	printf("          %c\n", 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c", 219);												  // lower-right corner
	for (int i = 1; i <= 40; i++)											  // lower box lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 219); // lower-right lines
	printf("\033[1;36m");
	int a = 0;
	//________________________________________________________
	printf("\033[1;36m");
	printf("\n\t\t\t%c", 220);	  // upper-left corner
	for (int i = 1; i <= 40; i++) // upper border lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 220); // upper-right corner
	printf("\t\t\t%c 3.                                     %c\n", 219, 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line// left box line - text - rigfht box line
	printf("\t\t\t%c                ", 219);
	printf("\033[4;31m");
	printf("QUIZ "); // left box line - text - rigfht box line
	printf("\033[0m");
	printf("\033[1;36m");
	printf("                   %c\n", 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c", 219);												  // lower-right corner
	for (int i = 1; i <= 40; i++)											  // lower box lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 219); // lower-right lines
	printf("\033[1;36m");
	printf("\n\n-1 to exit the program.");
	printf("\n\n%c", 201);		  // upper-left corner
	for (int i = 1; i <= 17; i++) // upper border lines
	{
		printf("%c", 205);
	}
	printf("%c\n", 187);											  // upper-right corner
	printf("\%c\033[1;33m  SELECT  :    \033[1;36m  %c\n", 186, 186); // left box line - text - rigfht box line
	printf("%c", 200);												  // lower-right corner
	for (int i = 1; i <= 17; i++)									  // lower box lines
	{
		printf("%c", 205);
	}
	printf("%c\n", 188);
	//___________________________________________________
	while (!(a == -1 || a == 1 || a == 2 || a == 3))
	{
		gotoxy(14, 29);
		scanf("%d", &a);
		if (a != -1 && a != 1 && a != 2 && a != 3)
		{
			gotoxy(14, 29);
			printf("   ");
			Beep(523, 800);
			Beep(523, 800);
		}
	}
	//______________________________________________
	next();
	return a;
}
int testpage()
{
	printf("\033[1;36m");
	printf("\t\t\t%c", 220);	  // upper-left corner
	for (int i = 1; i <= 40; i++) // upper border lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 220); // upper-right corner
	printf("\t\t\t%c                                        %c\n", 219, 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line// left box line - text - rigfht box line
	printf("\t\t\t%c          ", 219);
	printf("\033[4;31m");
	printf("K-maps with minterns"); // left box line - text - rigfht box line
	printf("\033[0m");
	printf("\033[1;36m");
	printf("          %c\n", 219);
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c                                        %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c", 219);												  // lower-right corner
	for (int i = 1; i <= 40; i++)											  // lower box lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 219); // lower-right lines
	printf("\033[0m");
	// choices
	variable_choices("1.  Two variables   ");
	variable_choices("2.  Three variables ");
	variable_choices("3.  Four variables  ");
	variable_choices(" SELECT :           ");
	int choice = 0;
	while (!(choice >= 1 && choice <= 3))
	{
		gotoxy(45, 26);
		scanf("%d", &choice);
		if (!(choice >= 1 && choice <= 3))
		{
			Beep(523, 800);
		}
	}
	getch();
	system("cls");
	return choice;
}
void variable_choices(char *str)
{
	// printf("")
	printf("\033[1;31m");
	printf("\n\n\t\t\t\t%c", 218); // upper-left corner
	for (int i = 1; i <= 20; i++)  // upper border lines
	{
		printf("%c", 196);
	}
	printf("%c\n", 191); // upper-right corner
	printf("\t\t\t\t%c", 179);
	printf("\033[1;33m");
	printf("%s", str); // left box line - text - rigfht box line
	printf("\033[0m");
	printf("\033[1;31m");
	printf("%c\n", 179);
	printf("\t\t\t\t%c", 192);	  // lower-right corner
	for (int i = 1; i <= 20; i++) // lower box lines
	{
		printf("%c", 196);
	}
	printf("%c\n", 217); // lower-right lines
	printf("\033[0m");
}
int quiz()
{
	char ans = '0';
	char score = 0;
	variable_choices("    5  QUESTIONS    ");
	printf("\n\n\n\n\n\t\t\t\tNOTE:\n\n\t\tYour results will be in an html file. You can access them in the same directory. :) \n\n\n\n\n");
	next();
	printf("%c. \n\n\n\tA Karnaugh map (K-map) is an abstract form of ____________ diagram organized as a matrix of squares.\n\t\ta) Venn Diagram\n\t\tb) Cycle Diagram\n\t\tc) Block diagram\n\t\td) Triangular Diagram\n", 223);
	printf("\n\nanswer :   ");
	while (!(ans >= 97 && ans <= 100))
	{
		gotoxy(30, 11);
		scanf(" %c", &ans);
		if (!(ans >= 97 && ans <= 100))
		{
			gotoxy(30, 11);
			printf("    ");
			Beep(523, 800);
		}
	}
	if (ans == 'a')
	{
		score += 10;
		printf("\033[1;31mRIGHT\033[0m\n");
	}
	else
		printf("\033[1;35mWRONG\033[0m\n");
	getch();
	system("cls");
	//_____________________________
	printf("\n\n\n\t%c. There are ______ cells in a 4-variable K-map.\n\t\ta) 12\n\t\tb) 16\n\t\tc) 18\n\t\td) 8\n", 223);
	printf("\n\nanswer :   ");
	ans = '0';
	while (!(ans >= 97 && ans <= 100))
	{
		gotoxy(30, 11);
		scanf(" %c", &ans);
		if (!(ans >= 97 && ans <= 100))
		{
			gotoxy(30, 11);
			Beep(523, 800);
			printf("    ");
		}
	}
	if (ans == 'b')
	{
		score += 10;
		printf("\033[1;31mRIGHT\033[0m\n");
	}
	else
		printf("\033[1;35mWRONG\033[0m\n");
	getch();
	system("cls");
	//________________________________
	printf("\n\n\n\t%c. The K-map based Boolean reduction is based on the following Unifying Theorem: A + A’ = 1.\n\t\ta) Impact\n\t\tb) Non Impact\n\t\tc) Force\n\t\td) Complementarity\n", 223);
	printf("\n\nanswer :   ");
	ans = '0';
	while (!(ans >= 97 && ans <= 100))
	{
		gotoxy(30, 11);
		scanf(" %c", &ans);
		if (!(ans >= 97 && ans <= 100))
		{
			gotoxy(30, 11);
			Beep(523, 800);
			printf("    ");
		}
	}
	if (ans == 'b')
	{
		score += 10;
		printf("\033[1;31mRIGHT\033[0m\n");
	}
	else
		printf("\033[1;35mWRONG\033[0m\n");
	getch();
	system("cls");
	//_____________________________________________________
	printf("\n\n\n\t%c.  Each product term of a group, w’.x.y’ and w.y, represents the ____________ in that group.\n\t\ta) Input\n\t\tb) POS\n\t\tc) Sum-of-Minterms\n\t\td) Sum of Maxterms\n", 223);
	printf("\n\nanswer :   ");
	ans = '0';
	while (!(ans >= 97 && ans <= 100))
	{
		gotoxy(30, 11);
		scanf(" %c", &ans);
		if (!(ans >= 97 && ans <= 100))
		{
			gotoxy(30, 11);
			Beep(523, 800);
			printf("    ");
		}
	}
	if (ans == 'c')
	{
		score += 10;
		printf("\033[1;31mRIGHT\033[0m\n");
	}
	else
		printf("\033[1;35mWRONG\033[0m\n");
	getch();
	system("cls");
	//________________________________________________
	printf("\n\n\n\t%c.  he prime implicant which has at least one element that is not present in any other implicant is known as ___________\n\t\ta) Essential Prime Implicant\n\t\tb) Implicant\n\t\tc) Complement\n\t\td) Prime Complement\n", 223);
	printf("\n\nanswer :   ");
	ans = '0';
	while (!(ans >= 97 && ans <= 100))
	{
		gotoxy(30, 11);
		scanf(" %c", &ans);
		if (!(ans >= 97 && ans <= 100))
		{
			gotoxy(30, 11);
			Beep(523, 800);
			printf("    ");
		}
	}
	if (ans == 'a')
	{
		score += 10;
		printf("\033[1;31mRIGHT\033[0m\n");
	}
	else
		printf("\033[1;35mWRONG\033[0m\n");
	getch();
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\tSCORE = %d", score);
	printf("\n\n\n\n\n\t\t\t\t\tHIGHEST SCORE = %d\n\n\n\n\n", 50);
	answers();
	getch();
	system("cls");
	return score;
}
void results(int a)
{
	char name[100];
	printf("Enter your name : ");
	scanf(" %[^\n]", name);
	char candidate[100];
	strcpy(candidate, name);
	int i = 0;
	while (candidate[i] != '\0')
	{
		if (candidate[i] >= 97 && candidate[i] <= 122)
		{
			candidate[i] -= 32;
		}
		i++;
	}
	strcat(name, ".html");
	FILE *fp = fopen(name, "w");
	fprintf(fp, "<html> <head></head> <body>");
	fprintf(fp, "<h1>%s</h1>", candidate);
	fprintf(fp, "<table border = "
				"1"
				"><tr><th><p>Total Score</p></th><th><p>Obtained score</p></th><th><p>Percentage</p></th></tr><tr> <td><p>50</td><td><p>%d</p></td><td><p>%.2lf %</p></td></tr></table>",
			a, ((double)(a) / 50) * 100.00);
	fprintf(fp, "</body> </html>");
	fclose(fp);
	getch();
	system("cls");
}
