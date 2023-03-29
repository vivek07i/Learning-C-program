#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age\n");

    scanf("%d", &age);
    printf("You Entered your age %d\n", age);

    if (age>=18)
    {
        printf("U can Vote!\n");
    }
    

    else if (age>10)
    {
        printf("You are teenager, You can vote for teenage\n");
    }
    else
    {printf("U can't Vote!\n");}


    return 0;
}

