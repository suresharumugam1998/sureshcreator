
#include <stdio.h>
#include<conio.h>
void main()
{
    int n,rem,count=0,a,sum=0,temp=1,i;
    printf("enter the armstrong number");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        rem=n%10;
        count++;
        n=n/10;
    }
    n=a;
    while(a!=0)
    {
        rem=a%10;
        i=0;
        temp=1;
        while(i<count)
        {
            temp=temp*rem;
            i++;
        }
        sum=sum+temp;
        a=a/10;
    }
    if(sum==n)
    {
        printf("armstrong");
        
    }
    else
    {
        printf("not");
    }
    getch();
}
