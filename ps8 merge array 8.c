#include<stdio.h>
#include<conio.h
int main(void)
{
    int i,j,k,a[10],b[10];
    int n,m,c,t;
    printf("\n Enter n and m:");
    scanf("%d %d",&n,&m);
    c=n+m;
    printf("\n Enter first array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter second array:");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=n,j=0;j<m;j++,i++)
    {
        a[i]=b[j];
    }
    printf("\narray:");
    for(j=0;j<c;j++)
    {
        printf("\t %d",a[j]);
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\n sorted array:");
    for(i=c-1;i>=0;i--)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}
