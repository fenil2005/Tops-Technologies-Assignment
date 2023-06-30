#include<stdio.h>
#include<conio.h>
void main () {
int vowels;
    clrscr();
    printf("1.A\n 2.E\n 3.I\n 4.O\n 5.U\n");
    printf("enter the choice : ");
    scanf("%d",&vowels);
    switch(vowels){
	    case 1:
		    printf("A");
		    break;

	    case 2:
		   printf("E");
		   break;

	    case 3:
		   printf("I");
		   break;

	    case 4:
		   printf("O");
		   break;

	    case 5:
		   printf("U");
		   break;


    }

    getch();

 }