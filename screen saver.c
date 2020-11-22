#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define ESC 27
void gotoxy(int,int);
void screen_saver(char []);
void box_saver(char []);
void box(void);
int i;
int main()
{
   char ch,name[40];
   gotoxy(40,12);
   printf("ENTER YOUR NAME.....");
   gets(name);
   read_again:
       system("color 06");
   system("cls");
   gotoxy(40,12);
   printf("1 : IN BOX...");
   gotoxy(40,14);
   printf("2 : SIMPLE...");
   ch=getch();
   if(ch=='1')
   {
          box_saver(name);
   }
   else if(ch=='2')
   {
      screen_saver(name);
   }else if(ch==ESC)
   {
      system("cls");
        system("color 71");
       gotoxy(40,12);
       printf("THANX");
       getch();
       exit(0);

   }else
   {
       goto read_again;

   }



}
void gotoxy(int a,int b)
{
  COORD x;
  x.X=a;
  x.Y=b;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);

}
void  screen_saver(char ch[])
{
char p;
extern int i;
    for(;;)
    {
      for(i=10;i<=70;i++)
      {
          system("cls");
           if(kbhit())
         {
           break;
         }
           gotoxy(i,12);

        puts(ch);
         system("color 01");
        system("color 04");
        system("color 03");
        system("color 02");







      }

          if(kbhit())
            break;


    }read_again2:
    system("cls");

    gotoxy(40,14);
    printf("2 : TRY WITH ANOTHER NAME");
    gotoxy(40,18);
    printf("3 :EXIT");
    p=getch();


     if(p=='2')
    {
        system("cls");
       main();


    }else if(p=='3')
    {
    system("cls");
        system("color 71");
       gotoxy(40,12);
       printf("THANX");
       getch();
       exit(0);

       }else
       {
           goto read_again2;


       }







}
void box_saver(char ch[])
{
    int j;
    char p;
    extern int i;
    system("cls");



     for(;;)
    {
      for(i=10;i<=70;i++)
      {

          system("cls");
           if(kbhit())
         {
           break;
         }
         box();
           gotoxy(i,12);

        puts(ch);
         system("color 01");
        system("color 04");
        system("color 03");
        system("color 02");







      }

          if(kbhit())
            break;

    }


   read_again3:
    system("cls");

    gotoxy(40,14);
    printf("2 : TRY WITH ANOTHER NAME");
    gotoxy(40,18);
    printf("3 :EXIT");
    p=getch();


     if(p=='2')
    {
        system("cls");
       main();


    }else if(p=='3')
    {
    system("cls");
        system("color 71");
       gotoxy(40,12);
       printf("THANX");
       getch();
       exit(0);

       }else
       {
           goto read_again3;


       }




}
void box(void)
{

    int j;
    extern int i;
    for(i=0;i<=25;i++)
  {
     for(j=2;j<=100;j++)
     {
       if(j==2||j==100||i==0||i==25)
       printf("*");
       else
       printf(" ");


     }
     printf("\n");
}

}
