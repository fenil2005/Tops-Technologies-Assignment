#include<stdio.h>
#include<conio.h>
void run();
void call();//function decalration
void main (){
     clrscr();
     call();
     run();//function calling
     printf("main function\n");
     getch();
}
void run(){
       printf("run function\n");
}
void call(){
       printf("call function\n");
}