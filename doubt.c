#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
char s[100],k[100];
printf("enter the length");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",&s[i]);
}
for(j=n;j<0;j--)
{
if((s[j]!='a')|| (s[j]!='e')|| (s[j]!='i')|| (s[j]!='o')|| (s[j]!='u'))
{
k[i]=s[j];
i++;
printf("%c",k[i]);
}
}
getch();
}

