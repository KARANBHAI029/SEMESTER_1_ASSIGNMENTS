#include<stdio.h>
int main()
{
   char ch;
   printf("enter character");
   scanf("%c",&ch);
   if(ch>='A'&& ch<='Z')
   printf("Capital letter");
   else if(ch>='a'&&ch<='z')
   printf("small case letter");
   else if(ch>='0'&&ch<='9')
   printf("digit");
   else
   printf("other character");
   return 0;
}   
   