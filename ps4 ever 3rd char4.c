#include <stdio.h>
#include<conio.h>
void main() 
{
	char str[30];
	scanf("%s",str);
	int i;
	for(i=0;str[i]!='\0';i=i+3)
	{
		printf("%c",str[i]);
	}
	
}
