#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
sum=rem*rem;
n=n/10;
}
printf("%d",sum);
getch();
}
