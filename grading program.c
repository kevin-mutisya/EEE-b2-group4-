#include <stdio.h>

int main() {
    char name[50];
    float prog_marks, math_marks, os_marks, avg_marks;
    int grade;
    char remark[20];

    // Accept input
    printf("Enter the student's name: ");
    scanf("%s", name);
    printf("Enter the marks obtained in Programming: ");
    scanf("%f", &prog_marks);
    printf("Enter the marks obtained in Maths: ");
    scanf("%f", &math_marks);
    printf("Enter the marks obtained in Operating Systems: ");
    scanf("%f", &os_marks);

    // Calculate average marks
    avg_marks = (prog_marks + math_marks + os_marks) / 3.0;

    // Calculate grade and remark
    if (avg_marks >= 80) {
        grade = 1;
        sprintf(remark, "Distinction");
    } else if (avg_marks >= 60) {
        grade = 3;
        sprintf(remark, "Credit");
    } else if (avg_marks >= 40) {
        grade = 5;
        sprintf(remark, "Pass");
    } else {
        grade = 7;
        sprintf(remark, "Fail");
    }

    // Display output
    printf("\n");
    printf("Name: %s\n", name);
    printf("Programming marks: %.2f\n", prog_marks);
    printf("Maths marks: %.2f\n", math_marks);
    printf("Operating Systems marks: %.2f\n", os_marks);
    printf("Average marks: %.2f\n", avg_marks);
    printf("Grade: %d\n", grade);
    printf("Remark: %s\n", remark);

    return 0;
}