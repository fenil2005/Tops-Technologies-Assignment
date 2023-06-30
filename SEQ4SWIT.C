#include<stdio.h>
#include<conio.h>
void main(){
    int weak;
       clrscr();
       printf("1.MONDAY\n 2.TUESDAY\n 3.WEDNESDAY\n 4.THURSDAY\n 5.FRIDAY\n 6.SATURDAY\n 7.SUNDAY\n");
       printf("enter the choice =\n ");
       scanf("%d",&weak);
       switch(weak){
	    case 1:
		    printf("MONDAY");
		    break;

	    case 2:
		    printf("TUESDAY");
		    break;

	    case 3:
		    printf("WEDNESDAY");
		    break;

	    case 4:
		    printf("THURSDAY");
		    break;

	    case 5:
		    printf("FRIDAY");
		    break;

	    case 6:
		    printf("SATURDAY");
		    break;

	    case 7:
		    printf("SUNDAY");
		    break;

	    default:
		    printf("invalid");


	     }




       getch();


}