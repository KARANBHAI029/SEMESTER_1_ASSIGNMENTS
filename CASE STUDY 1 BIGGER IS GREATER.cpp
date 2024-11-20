#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char str[100];
	printf("enter the word");
	gets(str);
	puts(str);
	len=strlen(str);
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(str[j]<str[j+1])
			{
				char temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
				break;
            }
		}
	}
	puts(str);
}
