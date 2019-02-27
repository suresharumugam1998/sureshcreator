#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,k,sum=0;
    printf("enter the number");
    scanf("%d",&n);
     printf("enter the kth number");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=a[0]+a[1];
    if(sum==k)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    getch();
    }
