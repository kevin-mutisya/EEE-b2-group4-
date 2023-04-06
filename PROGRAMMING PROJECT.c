#include<stdio.h>
/*This program calculates the salary of workers using fixed price and a fixed rate
  For each worker the items they have sold are used to find goods remaining in store at that instance
*/

int main()
{
    int del, sold[100],size , sum = 0 ,rem ,pr = 1000 ,salary ;
    printf("Enter the number of items delivered ");
    scanf("%d", &del);
    printf("Items delivered are %d", del);
    printf("\nEnter number of employees ");
    scanf("%d", &size);
    for (int i =0;i<size;i++)/*to give the array size of workers a
                               value which should be input as the number
                               of workers can be different*/
        {
        printf("\nEnter the items sold for each employee ");
        scanf("%d",&sold[i]);
            sum = sum + sold[i];
            if ( del < sum)
            {
                printf("\nEnter the correct number of items sold\n\n");
                return 0;
                 /*terminate the program if the number of items entered
                            by a worker is greater than the remaining items in store*/
            }
            else{
            rem = del - sum;

            printf("\nTotal items sold are %d \n", sum);
            printf("\nItems remaining in store are %d\n",rem);
            salary = pr*0.15*sold[i];
            printf("\nYour salary is %d\n\n", salary);
    }
    }
}




