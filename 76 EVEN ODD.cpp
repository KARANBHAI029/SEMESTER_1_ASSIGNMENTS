#include<stdio.h>
void iseven(int a);
int main()
{
	int a;
	printf("enter number to be checked");
	scanf("%d",&a);
	iseven(a);
}
void iseven(int a)
{
	if(a%2==0)
	printf("number is even");
	else
	printf("number is odd");
}
