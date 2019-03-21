#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],sum=0,j,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=((sum)|(a[j]));
    }
printf("%d",sum);
getch();
}
