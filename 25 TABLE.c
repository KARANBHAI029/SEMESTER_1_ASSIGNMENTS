#include<stdio.h>
int main()
{
  int n, i, p;
  printf("n");
  scanf("%d",&n);
  for(i=1; i<=10; i++)
  {
     p=n*i;
    printf("\n table of n %d*%d=%d",n,i,p);
  }
  
  return 0;
}