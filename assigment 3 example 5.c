//program to calculate the area of a circle/
#include<stdio.h>
#define Pi 3.142
main()
{
    float radius, area;
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius);
    area=Pi*radius*radius;
    printf("Area is %f",area);
    return 0;
}
