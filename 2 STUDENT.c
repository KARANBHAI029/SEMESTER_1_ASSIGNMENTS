#include<stdio.h>

int main()
{
    float M,E,S,H,G,total,percentage;
    printf("enter the marks");
    scanf("%f,%f,%f,%f,%f", &M,&E,&S,&H,&G);
    total=M+E+S+H+G;
    percentage= total/5;
    printf("total is =%f", total );
    printf("percentage is =%f", percentage);
    return 0;
}   
