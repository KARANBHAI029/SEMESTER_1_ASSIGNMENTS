#include<stdio.h>
int main()
{
   int num, h, m, s;
   printf("enter the number");
   scanf("%d", &num);
   h= num/3600;
   m=(num-h*3600)/60;
   s=(num-h*3600-((num-h*3600)/60));
   printf("time is %d hours %d min %d sec", h,m,s);
   return 0;
}   