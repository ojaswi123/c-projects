#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,choice;
float sina,cosb;
clrscr();
printf("enter any two numbers");
scanf("%d%d",&a,&b);
printf("1.addition\n 2.subtraction\n 3.multiplication\n 4.divison\n 5.modulus\n 6.trignametry\n");
printf("enter nay choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
c=a+b;
printf("result=%d",c);
break;
}
case 2:
{
c=a-b;
printf("result=%d",c);
break;
}
case 3:
{
c=a*b;
printf("result=%d",c);
break;
}
case 4:
{
c=a/b;
printf("result=%d",c);
break;
}
case 5:
{
c=a%b;
printf("result=%d",c);
break;
}
case 6:
{
b=sina;
c=cosb;
printf("result=%f",c);
}
}
getch();
}

