#include<stdio.h>
#include<conio.h>
void main()
{   int a,rem,sum=0,mul=1,k;
    printf("enter the number");
    scanf("%d",&a);
    k=a;
    while(k>0)
    {
        rem=k%10;
        sum=sum*10+rem;
        k=k/10;
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
