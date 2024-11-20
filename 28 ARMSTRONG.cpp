#include<stdio.h>
int main (void)
{
	int a,i,temp,sum;
	printf("Input number\n");
	scanf("%d",&a);
	i=0;
	temp=a;
	while(a!=0)
	{
		i=a%10;
		sum+=i*i*i;
		a/=10;
	}
	if(temp==sum)
	{
	   printf("number is armstrong");
	}
	else
	   printf("not an armstrong");
}
