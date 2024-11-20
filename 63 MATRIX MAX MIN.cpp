#include<stdio.h>
int main()
{
	int a[3][3],small,big;
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
	
	small=big=a[0][0];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]<small)
			{
			small=a[i][j];
		    }
		
	        if(a[i][j]>big)
			{
	     	big=a[i][j];
		    }
    	}
	
	}
	printf("SMALLEST IS %d\n",small);
	printf("LARGEST IS %d\n",big);
	
}
