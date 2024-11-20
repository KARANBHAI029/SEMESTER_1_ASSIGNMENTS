#include<stdio.h>
int main()
{
   int hr, min, sec, total_sec;
   printf("Enter hr");
   scanf("%d",&hr);
   printf("Enter min");
   scanf("%d",&min);
   printf("Enter sec");
   scanf("%d",&sec);
   printf("Time is %d:%d:%d" ,hr, min, sec);
   total_sec = hr*3600+ min*60+ sec;
   printf("\n total seconds are %d", total_sec);
   return 0;
}   
