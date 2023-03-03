#include<stdio.h>

int main(){
    char name[50];
    float english, math, science, average;

    printf("Enter student name: ");
    fgets(name,sizeof(name),stdin);

    printf("Enter marks for English: ");
    scanf("%f",&english);

    printf("Enter marks for Maths: ");
    scanf("%f",&math);

    printf("Enter marks for Science: ");
    scanf("%f",&science);

    average=(english+math+science)/3;
    printf("\nName: %s",name);
    printf("Average mark: %,2f\n",average);

    return 0;
}
