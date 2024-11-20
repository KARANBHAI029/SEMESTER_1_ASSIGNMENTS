#include<stdio.h>
int main(void)
{
    int num, max1 ,max2,n,i;
    printf("How Many Numbers?");
    scanf("%d",&n);
    max1=-5;
    max2=-4;
    for(i=0;i<n;i++)
    {
    	printf("ENTER NUMBER %d\n",i+1);
    	scanf("%d",&num);
    	if(num>max1)
    	{
    		max2=max1;
    		max1=num;
		}
		else if(num > max2 && num != max1) 
		{
            max2 = num;
        }
    }
    
        printf("Maximum: %d\n", max1);
        printf("Second Maximum: %d\n", max2);	
}
