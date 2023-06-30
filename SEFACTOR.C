#include<stdio.h>
#include<conio.h>
void main (){
	int no,i,fact=1;
     clrscr();
     printf("enter a number =\n ");
     scanf("%d",&no);
     for(i=10;i>=1;i--)
     {
       fact=fact*i;
     }
     printf("factorial is %d\n ",fact);
     getch();
}