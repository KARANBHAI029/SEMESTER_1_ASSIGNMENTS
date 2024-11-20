#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],*cptr;
	int len=0;
	printf("enter a string");
	gets(st);
	cptr=st;
	printf("string value");
	puts(st);
	len=strlen(st);
	printf("%d", len);
}
