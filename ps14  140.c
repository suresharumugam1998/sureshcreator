#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10];
	int n,i,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]=='a'||a[i]=='b')
	    {
	        count++;
	    }
	}
	if(count==n)
	{
	    printf("yes..contains only a and b");
	}
	else
	{
	    printf("no");
	}

}
