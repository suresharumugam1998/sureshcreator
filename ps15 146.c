#include <stdio.h>
#include<conio.h>

void main()
{
    int a,b,i,fact=1,fact1=1,res;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    for(i=1;i<=b;i++)
    {
        fact1=fact1*i;
    }
    res=fact/fact1;
    printf("%d",res);

   
}
