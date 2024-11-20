#include<stdio.h>
int main()
{
   int a, b, c, d;
   printf("enter numbers");
   scanf("%d,%d,%d", &a, &b, &c);
   d= a>b?(a>c?a:c):(b>c?b:c);
   printf(" the greatest no is=%d", d);
   return 0;
}   