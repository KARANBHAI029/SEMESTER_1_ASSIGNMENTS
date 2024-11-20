#include<stdio.h>
int main(void)
{
	int arr[10]={1,5,4,66,4,2,2,78,00,42};
	int i,j,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\n %d",arr[i]);
		printf("\n");
	}

	for(i=0;i<10;i++)
	{
		sum=0;
		for(j=0;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
			    sum=sum+1;
			}
		}printf(" %d element is present %d times\n",arr[i],sum);
		
	}printf("\n");
}
