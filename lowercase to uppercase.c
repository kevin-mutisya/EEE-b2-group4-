#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter the lowercase letter:");
    scanf("%c", &ch);

    ch = toupper(ch);//toupper() is a function that converts lowercase to uppercase

    printf("The uppercase equivalent is %c\n", ch);
    return 0;
}