#include<stdio.h>
int main()
{
	int i,j,temp,arr[10];
	printf("ENTER ARRAY 1 ELEMENTS");
	for(i=0;i<10;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	 printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{ bool flag= true;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag= false;
			}
		}
		if(flag==true)
		break;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	
}

