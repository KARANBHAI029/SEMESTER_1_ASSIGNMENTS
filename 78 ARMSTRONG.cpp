#include<stdio.h>
void isarmstrong(int a);
int main()
{
	int a;
	printf("Input number\n");
	scanf("%d",&a);
	isarmstrong(a);
}
void isarmstrong(int a)
{
	int i,temp,sum;
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
