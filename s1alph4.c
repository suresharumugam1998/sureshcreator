#include<stdio.h>
#include<conio.h>
void main()
{
char s;
printf("enter the character");
scanf("%[^\n]s",&s);
if((s>='A')&&(s<='Z')||(s>='a')&&(s<='z'))
  {
printf("alphabet");
}
else
{
printf("not");
}
getch();
}
