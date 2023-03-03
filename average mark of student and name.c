/*program to accept name of student,english,maths and science marks and calculate average*/
#include <stdio.h>
#define english m1
#define science m2
#define maths m3
int main()
{
    int m1,m2,m3;
    char name[50];
    float average;
    puts("Enter name of student:");//output name of student
    gets(name);//input name of student
    printf("Enter english,maths & science marks respectively:");//to output marks for respective subjects
    scanf("%d%d%d",&m1,&m2,&m3);//to input subject marks
    average = (m1 + m2 + m3) / 3;
        printf("%s\n",name);//output name
        printf("average mark is %f\n",average);//output average mark
    return 0;
}