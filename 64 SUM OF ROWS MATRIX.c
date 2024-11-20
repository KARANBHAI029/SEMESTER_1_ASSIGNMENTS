#include<stdio.h>
int main()
{
	int i,j, a[3][3],sum1=0,sum2=0,sum3=0;
	printf("Enter a matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n A matrix value \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
		for( j=0;j<3;j++)
		{
			sum1 += a[0][j];
            sum2 += a[1][j];
            sum3 += a[2][j];

		}
		
	
	printf("row1 sum is %d\nrow2 sum is %d\nrow3 sum is %d\n",sum1,sum2,sum3);
}
	
	
