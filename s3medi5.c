#include <stdio.h>
void main()
{
  int n,i,j,a[100],temp;
  printf("enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  n=(n+1)/2-1;
  printf("%d",a[n]);
}
