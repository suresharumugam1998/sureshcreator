#include <stdio.h>
void main()
{
    int a[100],i,min,pos,k,temp=1,n;
    scanf("%d %d",&n,&k);
    k=(n+1)-k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(temp<=k)
    {
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>min)
            {
                min=a[i],
                pos=i;
            }
        }
        if(temp==k)
        {
            printf("%d",min);
        }
        else
        {
            a[pos]=0;
            
        }
        temp++;
    
}
    
}
