#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int num,m,i,j,temp1,temp2,sum=0;
    printf("enter the number");
    scanf("%d%d",&num,&m);
    for(i=num;i<=m;i++)
    {
        sum=0;
        temp1=i;
        temp2=i;
    while(temp1>0)
    {
        j=temp1%10;
        sum+=pow(j,3);
        temp1=temp1/10;
    }
    if(sum==temp2)
    {
        printf("%d\n",sum);
    }
    }
    getch();
}
