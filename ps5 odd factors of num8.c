#include <stdio.h>
#include<conio.h>
void main()
{
	int i,num;
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(i%2==1 && num%i==0)
		{
			printf("%d ",i);
		}
	}
	
}
