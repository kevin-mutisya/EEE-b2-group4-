#include <stdio.h>
#include <string.h>

/**
 * main - prints'JOMO KENYATTA' in reverse using for loop.
 * return: zero
 */

int main(void)
{
    char word[] = "JOMO KENYATTA"; //we have declared our character array, called it 'word' initialized it with the string to print in reverse
    int len = strlen(word); //we get the length of the character array and stored it in len.

    for (int i = len - 1; i >= 0; i--) 
    {
        printf("%c", word[i]);
    }
/*we use for printf inside the for loop which prints the string in reverse using '%c' format specifier*/
    printf("\n"); //prints a new line
    return 0; // when the program runs succefully, we get a return zero from this main function
}