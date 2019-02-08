#include<stdio.h>
#include<conio.h>
void main()
{   int a,rem,sum=0,mul=1,b;
    printf("enter the number");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        rem=b%10;
        sum=sum*10+rem;
        b=b/10;
    }
    if(sum==a)
    {
    printf("palindrome");
}
    else
    {
        printf("not");
    }
    getch();
}
