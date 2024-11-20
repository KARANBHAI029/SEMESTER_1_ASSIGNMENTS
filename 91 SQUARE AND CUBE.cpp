#include<stdio.h>
int main()
{
	int a, *aptr, sqr=0, cube=0;
	printf("enter number");
	scanf("%d",&a);
	aptr= &a;
	sqr=(*aptr)*(*aptr);
	cube=(*aptr)*(*aptr)*(*aptr);
	printf("square= %d and cube= %d",sqr,cube);
}
