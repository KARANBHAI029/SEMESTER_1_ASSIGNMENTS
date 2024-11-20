#include<stdio.h>
int main(void)
{
	int i,n;
	printf("Enter n");
	scanf("%d",&n);
    printf("%d= ",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d, ",i);
		}
		
	}
	
}

