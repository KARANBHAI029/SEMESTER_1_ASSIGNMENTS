#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30], *pstr;
	pstr=str1;
	printf("enter a string\n");
	gets(str1);
	printf("your entered string is str1\n");
	puts(str1);
	int len=0;
	len=strlen(str1);
	int i=0;
	while(*pstr!='\0')
	{
		str2[i]=str1[len-i-1];
		pstr++;
		i++;
	}
	str2[i]='\0';
	printf("the copied string is\n");
	puts(str2);
}
