#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    { 
       for(j=5;j>i;j--)
       {printf(" ");}
       for(int k=1;k<=i;k++)
       {printf("*");}
       for(int l=1;l<i;l++)
       {printf("*");}
       printf("\n");
       
    }
    for(i=4;i>=1;i--)
    {
    for(j=5;j>i;j--)
       {printf(" ");}
    for(int m=1;m<=i;m++)
    printf("*");
    for(int n=1;n<i;n++)
       {printf("*");}
    printf("\n");
    }
    
    
    
} 
