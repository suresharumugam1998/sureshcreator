#include<stdio.h>
int main()
{
  int a[100],i,min,n;
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
  return 0;
}
