#include<stdio.h>

int main()
{
    float perpendicular, base, area;
    printf("enter perpendicular, base");
    scanf("%f,%f",&perpendicular,&base);
    area=(base*perpendicular)/2;
    printf("area of triangle is =%f", area);
    return 0;
}