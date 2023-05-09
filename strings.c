#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main(int argc, char const *argv[])
{
    // char str[] = {'v', 'i', 'v', 'e', 'k', '\0'};
    // char str[] = "vivek"; 
   
    //---->this is another method of putting string by compiler itself.
    // this \0 is used to put strings and limit the array to write only vivek instead of gaarbage values.
    // method to take input string from user.
    
    printf("Enter Your Sentence : ");
    char str[34];
    gets(str);
    // we can also use scanf but it is not mostly used bcoz it cant take wide spaces, so we use gets.

    printf("Using basic method(printStr) : ");
    printStr(str);

    printf("\nUsing printf : %s", str);

    printf("\nUsing puts : ");
    puts(str);

    return 0;
}
