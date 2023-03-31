#include <stdio.h>

int main()
{
    //  use of contine statement in loops

    // used when u don,t want to break the code if the condition fail instead able to put further inputs.
    // here i is used to take the number of inputs it means that total number of time you can put age is less than 10.
    // cntinue will keep taking input even the condition is failed.
    printf("Hello World\n");
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i+1);
        scanf("%d", &age);

        if (age>15)
        {
            continue;
            /* here continue will take another reading if age is greater than 10, but will print  below things if
            age is less than 10
            */ 
            
        }
        printf("i love this song\n");
        printf("i love this video\n");
        printf("i love this movie\n");
        printf("i love this dance\n");
        printf("i love this mobile\n");

    }
     
     printf("this will be printed at last when all input is taken i.e i<10 coz continue keeps taking reading even if condition fails");
//   this will be printed when total of 10 inputs are taken as i<10

    return 0;
}
