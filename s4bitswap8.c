#include<stdio.h> 
#include<conio.h>
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    n1=n1^n2;                                  
    n2=n1^n2;                                   
    n1=n1^n2;                                   
    printf("%d %d",n1,n2);
}
