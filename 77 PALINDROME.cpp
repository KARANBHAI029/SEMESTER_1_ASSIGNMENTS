#include<stdio.h>
void ispalindrome(int num)
{
    int sum,q,palindrome;
	sum=0;
	palindrome=num;
	while(num!=0)
	{
		q=num%10;
		sum=sum*10+q;
		num=num/10;
	}
	if(palindrome==sum)
	printf("palindrome number");
	else
	printf("not a palindrome number");
}
int main()
{
	int num;
	printf("Input num");
	scanf("%d",&num);
	ispalindrome(num);
}

