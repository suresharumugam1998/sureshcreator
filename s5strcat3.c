#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	int i,j;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("\n enter the string2:");
	scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		
	}
	for(j=0;str2[j]!='\0';j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';
	printf("\n%s",str1);
	
}
