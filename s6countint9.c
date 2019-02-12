#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,count=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
count++;
n=n/10;
}
printf("%d",count);
}
