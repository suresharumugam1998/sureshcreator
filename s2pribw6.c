#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,flag;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    for(j=a+1;j<b;j++)
    {
        flag=0;
        for(i=1;i<=j;i++)
          {
            if(j%i==0)
            {
                flag++;
                
            }
        }
        if(flag==2)
        {
             printf("%d ",j);
        }
                 }
    getch();
}
