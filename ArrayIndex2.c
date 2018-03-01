#include <stdio.h>
void main()
{
  int n,num,i;
  printf("Length of Array:");
  scanf("%d",&n);
  int a[n];
  printf("\nArray elements:");
  for(i=0;i <n;i++)
  {
    scanf("%d",a[i]);
   }
   printf("\nEnter the number to be found:");
   scanf("%d",&num);
   for(i=0;i <n;i++)
   {
     if(a[i]==num)
     {
       flag=1;
       break;
      }
     }
     if(flag==1)
       printf("%d",i);
     else
       printf("-1");
}
