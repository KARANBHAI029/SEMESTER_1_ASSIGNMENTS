#include<stdio.h>
int main()
{
   char operator;
   int a, b;
   float operation;
   printf("select an operator from '+,-,*,/' ");
   scanf("%c", &operator);
   if(operator == '+')
   {
   printf("Addition");
   }
   else if(operator == '-')
   {
   printf("Subtraction");
   }
   else if(operator == '*')
   {
   printf("Multiplication");
   }
   else if(operator == '/')
   {
    printf("Division");
   }
   printf("\n Enter 2 numbers");
   scanf("%d,%d",&a,&b);
   
   switch(operator)
   {
      case'+':
         operation= a+b;
         printf("Addition of %d & %d is %.2f",operation);
         break;
      
      case'-':
         operation=a-b;
         printf("Subtraction of %d&%d is %.2f",operation);
         break;
      
      case'*':
         operation=a*b;
         printf("Multiplication of %d&%d is %.2f",operation);
         break;
      
      case'/':
          if (b == 0)   // if n2 == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &b);        
                }  
         operation =a/b;
         printf("Division of %d&%d is %.2f",operation);
         break;
      
      default:
      printf("Wrong input");   
   }  
   return 0;
}   