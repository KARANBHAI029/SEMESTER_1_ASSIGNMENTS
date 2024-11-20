#include<stdio.h>
int main()
{
    int M, P, C, E, CM;
    printf("enter marks /n");
    scanf("%d,%d,%d,%d", &M,&P,&C,&E);
    CM = M/2+P/2+C/2+E;
    printf("cutoff marks are %d", CM);
    return 0;
}   
    
    