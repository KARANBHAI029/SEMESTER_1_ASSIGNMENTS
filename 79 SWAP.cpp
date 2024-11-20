#include<stdio.h>
void swap(int a, int b)
{
	int temp;
    temp=a;
	a=b;
	b=temp;
	printf("After Swap Function a=%d,b=%d\n",a,b);
}
int main()
{
	int a, b;
	printf("Enter a and b\n");
	scanf("%d%d",&a,&b);
	printf("Before Swap Function a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("After Swap a=%d,b=%d\n",a,b);	
}
