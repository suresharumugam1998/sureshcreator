#include<stdio.h>
void main()
{
  int hr1,hr2,min1,min2,time1,time2,temp1,temp2;
  printf("enter the time");
  scanf("%d%d\n",&hr1,&hr2);
  scanf("%d%d",&min1,&min2);
  if(hr1<hr2)
  {
    temp1=hr2;
    hr2=hr1;
    hr1=temp1;

     }
  if(min1<min2)
  {
    temp2=min2;
    min2=min1;
    min1=temp2;
  }
    
     time1=hr1-hr2;
  time2=min1-min2;
  printf("%d:%d",time1,time2);
  
  
}
