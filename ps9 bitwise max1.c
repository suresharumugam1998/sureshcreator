#include <stdio.h>
#include<conio.h>

void main() 
{
	int n;
	scanf("%d",&n);
	int array[n],i,j,res,max=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			res=(array[i])&(array[j]);
			if(res>max)
			{
				max=res;
			}
		}
	}
	printf("%d",max);
	
}
