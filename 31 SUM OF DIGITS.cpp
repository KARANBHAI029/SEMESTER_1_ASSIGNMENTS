#include<stdio.h>
int main (void)
{
	int a,q,sum;
	printf("Input number\n");
	scanf("%d",&a);
	while(a!=0)
	{
		q=a%10;
		sum+=q;
		a/=10;
	}
	printf("SUM OF DIGITS IS %d",sum);
}
