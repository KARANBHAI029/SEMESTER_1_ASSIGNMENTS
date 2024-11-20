#include<stdio.h>

int main()
{
    int i,arr1[10],arr2[10],arr3[10],sum=0;
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
      printf(" ARRAY 1");
      
    for(i=0;i<10;i++)
    {  
    
       printf("%d",arr1[i]);
       printf("\n");
    }
      printf("\n");
      printf(" ARRAY 2");
      
      for(i=0;i<10;i++)
    { 
      
       printf("%d",arr2[i]);
       printf("\n");
    }
      printf("\n");
      
    for(i=0;i<=10;i++)
    {
    	sum=arr1[i]+arr2[i];
    	arr3[i]=sum;
	}
	sum=0;
	printf(" ARRAY 3");
	  
    for(i=0;i<10;i++)
    { 
      
       printf("%d",arr3[i]);
       printf("\n");
     
    }
      printf("\n");
}
	
