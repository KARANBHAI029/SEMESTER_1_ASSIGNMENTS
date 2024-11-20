#include<stdio.h>
int main(void)
{
	int n,num,count=0,sum=0;
	printf("How many number?");
	scanf("%d",&n);
	while(count<n && num>=0)
	{
		printf("Enter the no. of inputs %d",count+1);
		scanf("%d",&num);
		if(num>=0)
		{
		   sum+=num;
	    }
	    count++;
	}
	printf("Sum of numbers is %d",sum);
	return 0;
}
