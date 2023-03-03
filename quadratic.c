#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, x1, x2, dis;

    printf("Enter the equivalent values of a, b and c in the quadratic equation:\n");
    scanf("%f %f %f", &a, &b, &c);

    dis = b*b - 4*a*c;

    if(dis>=0){
        x1 = (-b + sqrt(dis))/(2*a);
        x2 = (-b - sqrt(dis))/(2*a);
        printf("\nRoots of the quadratic equation are: \n x1 = %.3f \n x2 = %.3f \n\n", x1, x2);
        printf("Values of a, b and c: \na =%.2f\nb = %.2f\nc = %.2f\n", a, b, c);

    }else{
        printf("\nThe given equation has no real roots");
    }
    return 0;
}