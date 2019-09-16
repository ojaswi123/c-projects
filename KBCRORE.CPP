#include<stdio.h>
#include<conio.h>
void question1();
void main()
{
 clrscr();

 printf("\n\n\n\n\n\n\t\t\t\t  ______________\
 \n\t\t\t\t | Hello And WELCOME TO\t|\
 \t\t\t\t\t\t\t | KAUN BANEGA\t|\
 \t\t\t\t\t\t\t |  CROREPATI\t|\
 \n\t\t\t\t |______________|\n");
 getche();
 question1();
 getch();
}
char a,b,c,d,A,B,C,D,ans;
void question2();
void question1()
{
 clrscr();
 fflush(stdin);
 printf("\nQ1.What does AC and DC stand for in the electrical field?");
 printf("\n A. A Rock Band from Australia\t B. Alternating Current and Direct Current");

 printf("\n C. Average Current\t and Discharged Capacitor\
 \nD. Atlantic City and District of Columbia  ");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'B':
  case 'b':
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.1,000!!");
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }

 if(ans == 'B' || ans == 'b')
 {
  getche();
  clrscr();
  question2();
 }
}
void question3();
void question2()
{
 clrscr();
 fflush(stdin);

 printf("\nQ2. Sometimes computers and cash registers in a foodmart are connected to a UPS system. What does UPS mean?");
 printf("\nA. United Parcel Service \t B. Uniform Product Support");
 printf("\nC. Under Paneling Storage\t D.Uninterruptable Power Supply");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.2,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }

 if(ans == 'D' || ans == 'd')
 {
  getche();
  clrscr();
  question3();
 }

}
void question4();
void question3()
{
 clrscr();
 fflush(stdin);

 printf("Q3.Who is the author of Hamlet?");
 printf("\nA. Christopher Marlowe\t B. William Shakespeare");
 printf("\nC. Geoffrey Chaucer\\t D. Edith Wharton");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'B':
  case 'b':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.3,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'B' || ans == 'b')
 {
  getche();
  clrscr();
  question4();
 }

}
void question5();
void question4()
{
 clrscr();
 fflush(stdin);

 printf("Q4.What frequency range is the High Frequency band?");
 printf("\nA. 100 kHz\tB. 1GHz");
 printf("\nC. 30 to 300 MHz\t D. 3 to 30 MHz");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.5,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'D' || ans == 'd')
 {
  getche();
  clrscr();
  question5();
 }

}
void question6();
void question5()
{
 clrscr();
 fflush(stdin);
 printf("Q5.What does EPROM stand for?");
 printf("\nA. Electric Programmable Read Only Memory\n    B. Erasable Programmable Read Only Memory");


 printf("\n| C. Evaluable Philotic Random Optic Memory \ n D. Every Person Requires One Mind\t\t\t|");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'B':
  case 'b':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.10,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'B' || ans == 'b')
 {
  getche();
  clrscr();
  question6();
 }

}
void question7();
void question6()
{
 clrscr();
 fflush(stdin);
 printf("Q6.Which motor is NOT suitable for use as a DC machine?");
 printf("\nA. Permanent magnet motor \t B. Series motor");
 printf("\nC. Squirrel cage motor \t D. Synchronous motor");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'C':
  case 'c':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.25,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'C' || ans == 'c')
 {
  getche();
  clrscr();
  question7();
 }

}
void question8();
void question7()
{
 clrscr();
 fflush(stdin);
 printf("Q7.Compact discs, (according to the original CD specifications)hold how many minutes of music?");
 printf("\nA. 74 mins\t B. 56 mins");
 printf("\nC. 60 mins\t D. 90 mins");
 scanf("%c",&ans);

 switch(ans)
 {
  case 'B':
  case 'b':
  case 'C':
  case 'c':
  case 'D':
  case 'd':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'A':
  case 'a':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.50,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'A' || ans == 'a')
 {
  getche();
  clrscr();
  question8();
 }

}
void question9();
void question8()
{
 clrscr();
 fflush(stdin);
 printf("Q8.Who was played by Kenneth Branagh in 'Hamlet' (1996)?");
 printf("\n| A. Horatio\t\t     |\t B. Laertes\t\t\t|");
 printf("\n| C. Polonius\t\t     |\t D. Hamlet\t\t\t|");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.1,00,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'D' || ans == 'd')
 {
  getche();
  clrscr();
  question9();
 }

}
void question10();
void question9()
{
 clrscr();
 fflush(stdin);
 printf("Q9.Which famous national leader of India has written books on the ancient Greek philosopher Socrates and the ancient Roman king Marcus Aurelius?");
 printf("\nA. Mahatma Gandhi\t B. Jawaharlal Nehru");
 printf("\nC. Bal Gangadhar Tilak\t D. C.Rajagopalachari");
 scanf("%c",&ans);
 switch(ans)
 {
  case 'A':
  case 'a':
  case 'B':
  case 'b':
  case 'C':
  case 'c':
   printf("\n\nWRONG ANSWER!!");
  break;
  case 'D':
  case 'd':
  {
   printf("\n\nCORRECT ANSWER!!");
   printf("\n\nYOU WON Rs.10,00,000!!");
  }
  break;
  default:
   printf("\n\nIMPROPER CHOICE!!");
 }
 if(ans == 'D' || ans == 'd')
 {
  getche();
  clrscr();
  question10();
 }

}
void question11();
void question10()
{
  clrscr();
  fflush(stdin);
  printf("\n\nQ10.Sishu is the literary work of which Indian author?");
  printf("\nA. Jawaharlal Nehru");
  printf("\nB. Arundhati Roy");
  printf("\nC. Rabindranath Tagore");
  printf("\nD. Vikram Seth \n");
  scanf("%c",&ans);

  switch(ans)
  {
   case 'A':
   case 'a':
   case 'B':
   case 'b':
   case 'D':
   case 'd':
    printf("\n\nWRONG ANSWER!!");
   break;
   case 'C':
   case 'c':
   {
    printf("\n\nCORRECT ANSWER!!");
    printf("\n\nYOU WON Rs.50,00,000!!");
   }
   break;
   default:
    printf("\n\nIMPROPER CHOICE!!");
  }

  if(ans == 'C' || ans == 'c')
  {
   getche();
   clrscr();
   question11();
  }

}
void question11()
{
  clrscr();
  fflush(stdin);
  printf("\n\nQ11.What was the active medium used in the first working laser ever constructed?");
  printf("\nA. Helium-neon gas");
  printf("\nB. A ruby rod");
  printf("\nC. A diamond block ");
  printf("\nD. Carbon dioxide gas\n");
  scanf("%c",&ans);

  switch(ans)
  {
   case 'A':
   case 'a':
   case 'C':
   case 'c':
   case 'D':
   case 'd':
    printf("\n\nWRONG ANSWER!!");
   break;
   case 'B':
   case 'b':
   {
    printf("\n\nCORRECT ANSWER!!");
    printf("\n\nYOU WON Rs.1,00,00,000!!");
   }
   break;
   default:
    printf("\n\nIMPROPER CHOICE!!");
  }

  if(ans == 'B' || ans == 'b')
  {
   getche();
   clrscr();
   gotoxy(30,8);
   printf("CONGRATULATIONS!!\n  \t Thank you!!");

  }}
