#include<stdio.h>
int main (void)
{
	int a,q,sum,r,sum2;
	printf("Input number\n");
	scanf("%d",&a);
	while(a!=0)
	{
		q=a%10;
		sum+=q;
		a/=10;
	}
	if(sum/10!=0)
	{
		sum2=0;
		while(sum!=0)
	    {
	    	r=sum%10;
		    sum2+=r;
		    sum/=10;
	    }
	    printf("SUM OF DIGITS IS %d",sum2);
	}
	else
	printf("SUM OF DIGITS IS %d ",sum);
}
		
