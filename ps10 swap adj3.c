#include <stdio.h>
#include<stdio.h>

void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		printf("%d ",a[i]);
		if(i==n-2)
		{
		printf("%d",a[i+1]);
		}
	}

	
}
