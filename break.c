#include <stdio.h>

int main()
{
    //  use of break statement in loops.

    // used to avoid the code if the condition in loop fails.
    // here i is used to take the number of inputs it means that total number of time you can put age is less than 10.
    //  break will break the condition of code and move to further code.

    printf("Hello World\n");
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i+1);
        scanf("%d", &age);

        if (age>15)
        {
            break;  
        }
        // here break will forget everything and move to next code, if age more than 10.
        printf("i love this song\n");
        printf("i love this video\n");
        printf("i love this movie\n");
        printf("i love this dance\n");
        printf("i love this mobile\n");

    }

    printf("Break will print this if age is greater than 10\n");
    // this will be printed as soon as code breaks i.e when u put input age>15
    return 0;
}
