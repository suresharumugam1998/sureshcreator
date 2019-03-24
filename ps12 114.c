#include <stdio.h>
#include<conio.h>
 

void main()

{

	int num,sum=0,sq,rem;

	scanf("%d",&num);

	while(num!=0)

	{

		rem=num%10;

		sq=rem*rem;

		sum=sum+sq;

		num=num/10;

	}

	printf("\n%d",sum);



}
