#include <stdio.h>

//  factorial calculation using recursion
int factorial(int number)
{
    if (number == 1 || number == 0)

    {
        return 1;
    }
    else

    {
        return (number * factorial(number - 1));
    }
}

int main()

{
    int num;
    printf("Enter the number for the Factorial\n");
    scanf("%d", &num);

    printf("The Factorial of %d is %d\n", num, factorial(num));
    return 0;
}


