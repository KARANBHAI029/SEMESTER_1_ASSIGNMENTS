#include<stdio.h>
int main(void)
{
	int i,q,n;
	printf("input n");
	scanf("%d",&n);
	q=1;
	for(i=1;i<=n;i++)
	{
	q*=i;
	printf("%d/%d +",i,q);
	}

}
