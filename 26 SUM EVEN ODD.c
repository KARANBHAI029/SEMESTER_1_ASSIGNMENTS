//26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
#include<stdio.h>
int main()
{
	int n,i,sum_even, sum_odd;
    printf("intput n");	
    scanf("%d",&n);
    sum_even=0;
    sum_odd=0;
    i=1;
    while(i<=n)
    {
    	if(i%2==0)
    	sum_even+=i;
		else
		sum_odd+=i;
		i+=1;
	}
	printf("Sum of even numbers = %d\n", sum_even);
    printf("Sum of odd numbers = %d\n", sum_odd);
	
	return 0;
}



