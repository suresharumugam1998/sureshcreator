#include <stdio.h>
#include<conio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum=0,j,res[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=n;i>=0;i--)
	{
		sum=sum+a[i];
		res[j]=sum;
		j++;
	}
	for(j=n;j>0;j--)
	{
		printf("%d ",res[j]);
	}
	
}
