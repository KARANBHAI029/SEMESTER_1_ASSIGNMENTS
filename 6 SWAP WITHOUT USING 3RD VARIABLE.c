#include<stdio.h>
int main()
{
   int x,y;
   printf("enter two numbers \n");
   scanf("%d %d", &x,&y);
   y=x+y;
   x=y-x;
   y=y-x;
   printf("%d \t %d",x,y);
   return 0;
}
