#include<stdio.h>

int main()
{
    int arr[10],sum=0;
    printf("ENTER ARRAY NUMBERS");
    for(int i=0;i<10;i++)
    { 
       scanf("%d",&arr[i]);
     
    }
      printf("\n");
    for(int i=0;i<10;i++)
    { 
       printf("%d",arr[i]);
       printf("\n");
    }
      printf("\n");
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    
    
    
} 
