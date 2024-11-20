#include<stdio.h>
int main()
{
	int arr[10]={12,54,655848,7,42,66,41,7289,201,987};
	int i=0,big;
	big=arr[0];
	for(i=1;i<10;i++)
	{
		if(big<arr[i])
		{
			big=arr[i];
		}
	}
	printf("%d is biggest",big);
}
