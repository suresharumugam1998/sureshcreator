#include <stdio.h>
#include<conio.h>

void main() 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int array[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j])
			{
				count=count+1;
			}
		}
		if(count==k)
		{
			printf("%d",array[i]);
			break;
			
		}
	}
	
}
