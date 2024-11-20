#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter a matrix a \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n A matrix a value \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter a matrix b \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n A matrix b value \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Enter a matrix c \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		
	        c[i][j]=0;
	    	for(int k=0;k<3;k++)
		    {
			    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
		    }
		}
	}
	printf("\n Multiplication matrix c value \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
	
	
