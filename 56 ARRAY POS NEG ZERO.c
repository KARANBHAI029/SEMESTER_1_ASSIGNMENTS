#include<stdio.h>

int main() 
{
    int i,arr[10], count_neg = 0, count_pos = 0,count_zero = 0;

    printf("Enter 10 array numbers:\n");
    for( i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements:\n");
    for( i = 0; i < 10; i++) 
	{
        printf("%d\n", arr[i]);
    }
    for(i = 0; i < 10; i++) 
    {
    	if(arr[i]<0)
    	count_neg+=1;
    	else if(arr[i]>0)
    	count_pos+=1;
    	else
    	count_zero+=1;
	}
	printf("NEGATIVE NUMBERS =%d\n",count_neg);
	printf("POSITIVE NUMBERS =%d\n",count_pos);
	printf("ZERO NUMBERS =%d\n",count_zero);
}
    
