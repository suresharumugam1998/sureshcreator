#include <stdio.h>
#include<conio.h>
void main()
{
	int N,i,j,num,min;
	int array[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<N;i++)
	{
		int count=0;
		for(j=0;j<N;j++)
		{
			if(array[i]==array[j] && i!=j )
			{
				count=count+1;	
			}
			
		}
	if(count==0)
	{
		printf("%d",array[i]);
	}
	}
  }
