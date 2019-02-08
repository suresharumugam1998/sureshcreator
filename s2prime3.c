#include <stdio.h>
#include<conio.h>
void main()
{
    int k,i,temp=0;
    printf("enter the number");
    scanf("%d",&k);
    for(i=2;i<=k/2;i++)
    {
        if(k%i==0)
        {
            temp++;
        }
    }
    if(temp==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
