#include<stdio.h>
int isvowel(char msg[])
{
	int i,vcount=0;
	while (msg[i]!='\0')
	{
		switch(msg[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':	
			case 'u': vcount++;
			break;
		}i++;
		
	}printf("number of vowels=%d",vcount);
}
int main()
{
	char msg[80];
	printf("enter message");
	gets(msg);
	puts(msg);
	isvowel(msg);
	
}
