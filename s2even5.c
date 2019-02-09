#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,count=0;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        if(i%2==0)
        {
        printf("%d ",i);
    }
    else
    {
        count++;
    }
}
getch();
}
