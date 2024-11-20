#include<stdio.h>
int main()
{
   int seconds, d, h, m;
   printf("enter seconds");
   scanf("%d", &seconds);
   d=seconds/86400;
   h=(seconds-d*86400)/3600;
   m=(seconds-d*86400-(seconds-d*86400)/3600)/60;
   printf("time taken by earth revolution is =%d days %d hours %d minutes", d,h ,m);
   return 0;
}   