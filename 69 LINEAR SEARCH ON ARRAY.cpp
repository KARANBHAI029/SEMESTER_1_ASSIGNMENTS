#include<stdio.h>
int main()
{
	int i,j,a[5],temp,flag=0;
	printf("Enter a \n");
	for(int i=0;i<5;i++)
	{
			scanf("%d",&a[i]);
	}
	printf("\n A value \n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
		printf("\n");
	}
	printf("ENTER A NUMBER TO SEARCH\n");
	scanf("%d",&temp);
	for(int i=0;i<5;i++)
	{
		if(temp==a[i])
		{
		   flag=1;
		   j=i;
		   printf("NUMBER FOUND AT THE POSITION %d",j);
		   break;
		}
		   
	   	
	}
	if (flag==0)
	{
    	printf("NUMBER NOT FOUND ");
    }
}
