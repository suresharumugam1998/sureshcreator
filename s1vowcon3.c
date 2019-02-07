#include<stdio.h>
#include<conio.h>
void main()
{
char s;
printf("enter the character");
scanf("%[^\n]s",&s);
if((s=='a')||(s=='e')||(s=='i')||(s=='o')||(s=='u')||(s=='A')||(s=='E')||(s=='I')||(s=='O')||(s=='U'))
{
printf("vowel");
}
else
{
printf("constant");
}
getch();
}
