#include<stdio.h>
int main()
{
  int a[100][100],i,j,n;
  int det=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
           scanf("%d",&a[i][j]);
       }
  }
  
  for(i=0;i<n;i++)
  {
      det = det + (a[0][i]*(a[1][(i+1)%n]*a[2][(i+2)%n] - a[1][(i+2)%3]*a[2][(i+1)%n]));
  }
  printf("%d",det);

   return 0;
}
