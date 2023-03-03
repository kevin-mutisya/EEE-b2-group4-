//program to calculate average of certain number of integers
#include <stdio.h>
#include <conio.h>
int main()
{
    float num,sum = 0,avg;
    int n,i;
    printf("how many numbers?\n");//outputs number of integers to be averaged
    scanf("%d",&n);//inputs numbers to be averaged
    i = 1;
    while(i <= n)
        {
        printf("enter number %d",i);//output numbers to be averaged
        scanf("%f",&num);//input numbers to be averaged
        sum = sum + num;
        i ++;
        }
        avg = ( sum / n);
        printf("\naverage = %f",avg);//output the average value
        getch();
    return 0;
}
