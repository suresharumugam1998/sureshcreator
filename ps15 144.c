#include <stdio.h>
#include<conio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]%a[i]==0)
		{
			printf("%d ",a[i+1]);
		}
	}
	
}
