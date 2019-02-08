#include <stdio.h>
#include<conio.h>
void main()
{
    int a,mul=1,b,i;
    printf("enter the value and power");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        mul=mul*a;
    }
    printf("%d",mul);
    getch();
}
