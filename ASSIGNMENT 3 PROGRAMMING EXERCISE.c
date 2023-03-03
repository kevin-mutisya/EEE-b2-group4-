#include<stdio.h>

int main() {
    float length, width, perimeter, area;
    do {
        printf("Enter the length of the rectangle(non-negative value): ");
        scanf("%f",&length);
        printf("Enter the width of the rectangle(non-negative value): ");
        scanf("%f",&width);
    }while (length< 0||width<0);
    perimeter = 2*(length+width);
    area=length*width;

    printf("Perimeter of the rectangle is: %.2f\n",perimeter);
    printf("Area of teh rectangle is: %.2f\n",area);

    return 0;
}
