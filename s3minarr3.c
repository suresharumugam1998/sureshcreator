#include <stdio.h>
void main()
{
  int n,i,min=0,a[100];
  printf("enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  min=a[0];
  for(i=0;i<n;i++)
    {
      if(a[i]<min)
      {
        min=a[i];
      }
    }
    printf("%d",min);
  }
