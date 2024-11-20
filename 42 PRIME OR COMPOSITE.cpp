#include<stdio.h>
int main(void)
{
	int num,b,flag=1;
	printf("input num");
	scanf("%d",&num);
	for(b=2;b<num/2&&flag!=0;b++)
	{
		if(num%b==0)
		{
		   flag=0;
		}
	}	
		if(flag==1)
		printf("prime");
		else
		printf("composite");
			
	
}
