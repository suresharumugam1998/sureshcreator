#include<stdio.h>
#include<conio.h>
void main()
{
int a,count=0,rem;
printf("enter the number");
scanf("%d",&a);
while(a>0)
{
rem=a%10;
count++;
a=a/10;
}
printf("%d",count);
getch();
}
