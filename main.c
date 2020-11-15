#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
   int h=0,m=0,s=0;
   system("cls");//clrscr();
   printf("\tCLOCK**\n\n");
   printf("Plz enter a time in format HH:MM:SS=  ");
   scanf("%d%d%d",&h,&m,&s);
   start:

   for(h;h<24;h++)
   {
       for(m;m<60;m++){
        for(s;s<60;s++){
            system("cls");//clrscr();
            printf("\tCLOCK**\n\n");
            printf("\t\t-----------------------------------------------------------");
            printf("\n\n\t\t\t\t%d:%d:%d",h,m,s);
            if(h>12)
               {
                printf(" PM");
                printf("\n\t\t-----------------------------------------------------------");}
            else
               {
               printf(" AM");
               printf("\n\t\t---------------------------------------------------------");}
            for(double i=0;i<3619999;i++)
            {i++;
            i--;}
        }
        s=0;
       }
       m=0;
   }
   h=0;


   goto start;
getch();
}
