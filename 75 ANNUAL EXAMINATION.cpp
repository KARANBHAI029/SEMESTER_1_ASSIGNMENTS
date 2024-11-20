#include<stdio.h>
#define NO 4
void arr(int a[NO]);
void display(int a[NO]);
void total(int a[NO]);
int main()
{

	
	int STUDENT1[NO],STUDENT2[NO],STUDENT3[NO],STUDENT4[NO],STUDENT5[NO],STUDENT6[NO],STUDENT7[NO],STUDENT8[NO],STUDENT9[NO],STUDENT10[NO];
	arr(STUDENT1);
	arr(STUDENT2);
	arr(STUDENT3);
	arr(STUDENT4);
	arr(STUDENT5);
/*	arr(STUDENT6);
	arr(STUDENT7);
	arr(STUDENT8);
	arr(STUDENT9);
	arr(STUDENT10);*/
	char* array[4]={"ROLL_NO", "SUBJECT1", "SUBJECT2", "SUBJECT3"};
	for(int i=0;i<4;i++)
	{
		printf("%s \t ",array[i]);
	}
	printf("\n");
	display(STUDENT1);
	printf("\n");
	display(STUDENT2);
	printf("\n");
	display(STUDENT3);
	printf("\n");
	display(STUDENT4);
	printf("\n");
	display(STUDENT5);
	printf("\n");
/*	display(STUDENT6);
	printf("\n");
	display(STUDENT7);
	printf("\n");
	display(STUDENT8);
	printf("\n");
	display(STUDENT9);
	printf("\n");
	display(STUDENT10);
	printf("\n");*/
	total(STUDENT1);
	total(STUDENT2);
	total(STUDENT3);
	total(STUDENT4);
	total(STUDENT5);
/*	total(STUDENT6);
	total(STUDENT7);
	total(STUDENT8);
	total(STUDENT9);
	total(STUDENT10);*/
	
}

void arr(int a[NO])
{
	for(int j=0; j<NO;j++)
	{
	    printf("enter roll no. wise data");
	    scanf("%d",&a[j]);
	}
}
void display(int a[NO])
{
	for(int i=0; i<NO;i++)
	{printf("  %d\t         ",a[i]);
	
	}
}
void total(int a[NO])
{
	int i;
	int s=a[i+1]+a[i+2]+a[i+3];
	printf("%d",s);
	printf("\n");

	
}

