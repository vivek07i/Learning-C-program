#include <stdio.h>
void reverseSentence();

// Reverse a sentence using recursion

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}