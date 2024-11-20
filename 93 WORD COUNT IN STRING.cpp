#include<stdio.h>
int main()
{
	char str[30],*pstr;
	printf("\nEnter a String\n");
	gets(str);
	pstr=str;
	printf("\nYour String is\n");
	puts(str);
	int count=0,i=0;
	while(pstr[i]!='\0')
	{
		if(pstr[i]==' '|| pstr[i]=='\0')
		{
			count+=1;
		}
		i++;}
	
		if (i > 0)
        {
	  		count += 1;
   		}
    
	printf("\ntotal words are %d",count);
	
}
