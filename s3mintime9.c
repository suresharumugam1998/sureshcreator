#include<stdio.h>
void main()
{
  int minute,hr,time,time1;
  printf("enter the minute");
  scanf("%d",&minute);
  hr=60;
  time=minute/60;
  time1=minute%60;
  printf("%d %d",time,time1);
}
  
