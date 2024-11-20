#include<stdio.h>
int main()
{
   int a, b , c, max;
   printf("enter 3 numbers");
   scanf("%d,%d,%d",&a,&b,&c);
   if(a>b && a>c)
   printf("a is maximum");
   else if(a>b && a<c && b<c)
   printf("c is maximum");
   else if(a<b && b<c)
   printf("c is maximum");
   else if(a<b && b>c)
   printf("b is maximum");
   return 0;
}