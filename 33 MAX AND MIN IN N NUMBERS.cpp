#include<stdio.h>
int main(void)
{
    int num, max1 ,n,i;
    printf("How Many Numbers?");
    scanf("%d",&n);
    max1=-5;
    double min=9999999995272572;
    for(i=0;i<n;i++)
    {
    	printf("ENTER NUMBER %d\n",i+1);
    	scanf("%d",&num);
    	if(num>max1)
    	{
    	    max1=num;
		}
		else if(num<min) 
		{
            min=num;
        }
    }
    
        printf("Maximum: %d\n", max1);
        printf("Minimum: %lf\n", min);	
}
