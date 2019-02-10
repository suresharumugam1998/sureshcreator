#include <stdio.h>
void main()
{
  int n,i,max=0,a[100];
  printf("enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;i++)
    {
      if(a[i]>max)
      {
        max=a[i];
      }
    }
    printf("%d",max);
  }
