#include<stdio.h>
int main()
{
	int a,b,i;
	long double power;
	printf("input a,b");
	scanf("%d %d",&a,&b);
	power=1.0;
	i= 1;
	while(i<=b)
	{
		power *= a;
		i++;
	}
	printf("a %d to power of  b %d times is %Lf \n",a,b,power);
	return 0;
	
}
