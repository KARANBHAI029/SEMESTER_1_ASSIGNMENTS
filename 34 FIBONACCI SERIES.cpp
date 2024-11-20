#include<stdio.h>
int main(void)
{
	int n,i,sum,sum2,sum3;
	printf("enter n");
	scanf("%d",&n);
	sum=0,sum2=1;
	printf("%d, %d",sum,sum2);
	for(i=1;i<=n;i++)
	{
		sum3=sum+sum2;
		sum=sum2;
		sum2=sum3;
		printf(", %d",sum3);
	}
}
