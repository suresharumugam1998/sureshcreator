#include<stdio.h>

int main(void)
{
    int a[100],i,n,k,f=0,c;
    clrscr();
    
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",k);
            break;
        }
        else
        {
         if((a[i]>c)&&(a[i]<k))
         {
             printf("%d",a[i]);
         }
         else
         {
             c=a[i];
         }
        }
    }
       return 0; 
    getch();
}
