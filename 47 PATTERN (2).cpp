#include<stdio.h>
int main(void)
{
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++)
	{
	    ch='A';
		for(j=1;j<=i;j++)
		{
			printf("%c", ch);
		    ch++;
		}
		printf("\n");
		
	}
		
}
