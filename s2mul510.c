#include <stdio.h>
#include<conio.h>
void main()
{
    int n,i,s;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=0;
        s=5*i;
        printf("% d",s);
    }
    getch();
