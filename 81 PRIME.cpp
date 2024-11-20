#include<stdio.h>
int primecheck(int a)
{
	int i;
	if (a <= 1) 
	return 0;
	for(i=2;i<a;i++)
	{
    	if(a%i==0)
    	{
	    	return 0;
    	}
    
    }return 1;
}
int main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	if (primecheck(a)) 
	{ 
		printf("%d is a prime number.\n", a); 
	} 
	else
	{ 
		printf("%d is not a prime number.\n", a); 
	} 
	return 0;
}
