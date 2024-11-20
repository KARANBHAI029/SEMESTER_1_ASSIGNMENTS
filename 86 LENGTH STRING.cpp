#include<stdio.h>
#include<string.h>
int leng(char msg[])
{
	int len;
	len=strlen(msg);
    printf("length=%d",len);
}
int main()
{
	char msg[80];
	printf("enter message");
	gets(msg);
	puts(msg);
	leng(msg);
	
}
