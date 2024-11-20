#include<stdio.h>

int main()
{
    int i,arr1[10],arr2[10],arr3[10],temp;
    printf("ENTER ARRAY1 NUMBERS");
    for(i=0;i<10;i++)
    { 
       scanf("%d",&arr1[i]);
     
    }
      printf("\n");
      printf("ENTER ARRAY2 NUMBERS");
      
    for(i=0;i<10;i++)
    { 
       scanf("%d",&arr2[i]);
     
    }
      printf("\n");
      printf(" ARRAY 1\n");
      
    for(i=0;i<10;i++)
    {  
    
       printf("%d",arr1[i]);
       printf("\n");
    }
      printf("\n");
      printf(" ARRAY 2\n");
    for(i=0;i<10;i++)
    { 
      
       printf("%d",arr2[i]);
       printf("\n");
    }
    
    for(i=0;i<=10;i++)
    {
    	temp=arr2[i];
    	arr2[i]=arr1[i];
    	arr1[i]=temp;
	}
	printf("\n");
    printf(" ARRAY 1\n");
    for(i=0;i<10;i++)
    { 
      
       printf("%d",arr1[i]);
       printf("\n");
    }
    
    printf("\n");
    printf(" ARRAY 2\n");
    for(i=0;i<10;i++)
    { 
      
       printf("%d",arr2[i]);
       printf("\n");
    }
    
	
}
