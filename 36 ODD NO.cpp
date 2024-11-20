#include<stdio.h>
int main (void)
{
	int a,q,i;
	printf("Input number\n");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		if(i%2!=0)
		{
		q=i;
		printf("%d, ",q);
	    }
		i++;
	}
	
}
		
