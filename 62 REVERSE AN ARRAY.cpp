#include<stdio.h>

int main()
{
    int i,arr1[10],arr2[10],arr3[10],temp[10];
    printf("ENTER ARRAY1 NUMBERS");
    for(i=0;i<10;i++)
    { 
       scanf("%d",&arr1[i]);
     
    }
      printf("\n");
      printf("ARRAY 1");
      
    for(i=0;i<10;i++)
    {  
    
       printf("%d",arr1[i]);
       printf("\n");
    }
      printf("\n");
    
    
    for(i=0;i<10;i++)
    {
    	temp[i]=arr1[i];
    
	}
	 for(i = 0; i < 10; i++)
	{
        arr1[i] = temp[9 - i];
    }

	printf("\n");
    printf(" ARRAY 1 REVERSED\n");
    for(i=0;i<10;i++)
    { 
      
       printf("%d",arr1[i]);
       printf("\n");
    }
    
    
	
}
