#include<stdio.h>
int main()
{
    int a, b ,c;
    printf("enter a, b");
    scanf("%d,%d", &a, &b);
    c=b-a;
    b=b-c;
    a=a+c;
    printf("a and b are =%d,%d", a, b);
    return 0;
}