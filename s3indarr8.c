#include <stdio.h>
void main()
{
  int n,i,a[100];
  printf("enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("%d%d\t",i,a[i]);
  }
}
