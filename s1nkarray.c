#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,k,sum=0;
printf("enter the number");
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<=k;j++)
{
sum=sum+a[j];
}
printf("%d",sum);
getch();
}
