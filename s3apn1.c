#include <stdio.h>
void main()
{
  int n,a,d,sum=0,i;
  printf("enter the number");
  scanf("%d%d%d",&n,&a,&d);
  for(i=a;i<n;i++)
  {
  sum=sum+(a+(n-1)*d);
  }
  printf("%d",sum);
}
