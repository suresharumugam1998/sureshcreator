#include<stdio.h>
#include<conio.h>
void main()
{
char a[1000],b[100];
int i,j,count=0;
clrscr();
printf("enter the string");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(j=count;j>0;j--)
{
b[j]=a[j];
}
printf("%s",b[j]);
getch();
}
