#include <stdio.h>
void main()
{
  int num,i,flag=0,a[5]={1,10,2,4,9};
  scanf("%d",&num);
  for(i=0;i<5;i++)
  {
    if(a[i]==num)
    {
      flag=1;
      break;
    }
}
if(flag==1)
{ 
  printf("%d",i);
} 
else
{
  printf("-1");
} 
}
