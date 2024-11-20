#include<stdio.h>
int facto(int a)
{
	int fact=1;
	while(a>1)
	{
		fact*=a;
		a--;
	}
	
}
int main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	facto(a);
	//NCR
	int NCR, r;
	printf("enter r");
	scanf("%d",&r);
	NCR=facto(a)/(facto(r)*facto(a-r));
	printf("%d",NCR);	
}


