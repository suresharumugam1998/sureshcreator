#include <stdio.h>
#include<conio.h>

void main()
{
	int n;
	scanf("%d",&n);
	int array[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]<n)
		{
			printf("%d ",array[i]);
		}
	}

}
