#include<stdio.h>
int fibo(int n)
{
	int a=0, b=1,c;
	printf("fibonacci series %d, %d",a,b);
	for(int i=2;i<n;i++)
	{
		c=a+b;
		printf(", %d",c);
		a=b;
		b=c;
	}
	printf("\n");
	
}
int main()
{
	int n;
	printf("Entter number of terms");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
