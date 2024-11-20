#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[7]={98,78,52,999,12,402,0};
	int n=7;
	printf("unsorted array\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	//selection sort
	for(int i=0;i<n-1;i++)
	{
	int min = INT_MAX;
	int minidx= -1;
	
		for(int j=i;j<=n-1;j++)
		{
			if(min>arr[j]) 
			{
				min= arr[j];
				minidx=j;
			}
		}
		//swap the min and first element of unsorted array 
		// swap ,inidx and i
		int temp= arr[minidx];
		arr[minidx]=arr[i];
		arr[i]= temp;
	}
	printf("\n");
	printf("Sorted array: \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
