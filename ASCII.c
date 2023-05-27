#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

    return 0;
}

// For example, the ASCII value of 'A' is 65.

// What this means is that, if you assign 'A' to a character variable, 65 is stored in the variable rather than 'A' itself.