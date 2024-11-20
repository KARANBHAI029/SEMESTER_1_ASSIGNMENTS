#include<stdio.h>
int main()
{
	int N,q,count=0,a;
	printf("enter the number");
	scanf("%d",&N);
	a=N;
	while(N!=0)
	{
		q=N%10;
		if(a%q==0)
		{
			count+=1;
		}
		N/=10;
	}
	printf("CAN BE DIVIDED BY %d DIGITS",count);
}
