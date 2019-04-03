#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a[100],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]='$';
                }
            
            }
            if(count==0)
            {
                if(a[i]!='$')
                {
                    printf("%d",a[i]);
                }
            }
            count=0;
        }
        return 0;
        getch();
}
