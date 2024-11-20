#include<stdio.h>
int main()
{
	int i,j,a[3][3],temp[3][3];
	printf("Enter a matrix \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n A matrix value \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			temp[i][j]=a[j][i];
		}
		printf("\n");
	}
	printf("\n A transpose matrix value \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",temp[i][j]);
		}
		printf("\n");
	}
	
}
	
	
