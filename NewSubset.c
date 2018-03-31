#include<stdio.h>
void main ()
{
  int s[100],n,i,j;
  scanf("%d",&n);
  for(i=0; i < n; i++)
    {
      scanf("%d",&s[i]);
    }
    for(i=0;i<(1 << n);i++)
    {
        for(j=0;j < n;j++)
        {
            if((i & (1 << j)) > 0)
            {    
                printf("%d ",s[j]);
            }
	    }
	    printf ("\n");
    }
}
