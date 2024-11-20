#include<stdio.h>
int main(void)
{
	 int i,j,k,l;
    for(i=1;i<=5;i++)
    { 
       for(j=5;j>i;j--)
       {printf("  ");}
       for(k=1;k<=i;k++)
       {printf("%d ",k);}
       for(l=1;l<i;l++)
       {printf("%d ",i-l);}
       printf("\n");
	}
	
	for(i=4;i>=1;i--)
    { 
       for(j=5;j>i;j--)
       {printf("  ");}
       for(k=1;k<=i;k++)
       {printf("%d ",k);}
       for(l=1;l<i;l++)
       {printf("%d ",i-l);}
       printf("\n");
	}
		
}
