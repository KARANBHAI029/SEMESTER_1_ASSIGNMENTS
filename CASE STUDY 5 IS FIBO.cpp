#include<stdio.h>
int main()
{
	int t, N;
	printf("fibonacci serier upto how many terms?");
	scanf("%d",&t);
	int arr[t];
	arr[0]=0;
	arr[1]=1;
	/*for(int i=2;i<t;i++)
	{
		scanf("%d",arr[i]=arr[i-1]+arr[i-2]);
	}*/
	for(int i=2;i<t;i++)
	{
	    arr[i]=arr[i-1]+arr[i-2];
		printf("\n%d 	 ",arr[i]);
	}
	printf("\nEnter the digit to check ISFIBO\n");
	scanf("%d",&N);
	int i;
	for(i=0;i<t;i++) 
	{
        if(N==arr[i]) 
		{
    	    printf("\n%d YES ITS FIBO",N);
    	    break; 
    	}
    }
    if(i==t) 
	{
        printf("%d NO ITS NOT FIBO",N);
    }

	
}
