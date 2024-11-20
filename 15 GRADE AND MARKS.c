#include<stdio.h>
int main()
{
   int M, S, E, H, G, total;
   printf("enter marks");
   scanf("%d,%d,%d,%d,%d",&M,&S,&E,&H,&G);
   total=M+S+H+E+G;
   if(total>=450)
   printf("A");
   else if(total>=350 && total<450)
   printf("B");
   else if(total>=250 && total<350)
   printf("C");
   else if(total>=150 && total<250)
   printf("D");
   else
   printf("Fail");
   return 0;
}   
   