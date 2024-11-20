#include<stdio.h>
void maxarray(int arr[10])
{
	int max,i;
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("maximum is %d",max);
}
int main()
{
	int arr[10]={1,22,45,88,76,94,53,75,2,65};
	maxarray(arr);
	
}
