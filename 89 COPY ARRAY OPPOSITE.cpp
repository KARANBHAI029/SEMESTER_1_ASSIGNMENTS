#include<stdio.h>
int main()
{
	int arr[10], *aptr,i,arr2[10],*aptr2;
	aptr = &arr[0];
	aptr2=&arr2[0];
	printf("Enter array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",(aptr+i));
	}
	printf("\n Value of array1 \n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(aptr+i));
	}
	printf("\ncopied array elements successfully\n");
	for(i=9;i>=0;i--)
	{
		arr2[i]=*(aptr+i);
		printf("%d\n",*(aptr2+i));
	}
	
}
