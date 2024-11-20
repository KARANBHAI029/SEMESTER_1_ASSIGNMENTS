#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30], *pstr;
	pstr=str1;
	printf("enter a string\n");
	gets(str1);
	printf("your entered string is str1\n");
	puts(str1);
	int count=0;
	while(*pstr!='\0')
	{
		switch(*pstr)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			          count++;	
		}
		pstr++;
	}
	printf("\nvowels are %d\n",count);
}
