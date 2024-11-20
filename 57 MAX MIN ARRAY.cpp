#include<stdio.h>

int main() 
{
    int arr[10],max=0, min=0;

    printf("Enter 10 array numbers:\n");
    for(int i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements:\n");
    for(int i = 0; i < 10; i++) 
	{
        printf("%d\n", arr[i]);
    }
    max=min=arr[0];
    for(int i = 0; i < 10; i++) 
    {
    	if(arr[i]>max)
    	max= arr[i];
    	if(arr[i]<min)
    	min=arr[i];
	}
	printf("MAXIMUM %d\n",max );
	printf("MINIMUM %d\n", min);
}
    
