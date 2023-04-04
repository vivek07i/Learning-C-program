#include <stdio.h>

// fibonacci series by recursive approach

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
   int num;

    printf("Enter the Number of upto which You want the fibonacci series\n");
    scanf("%d", &num);

    printf("Fibnocci Series upto %d : \n", num);

    for (int i = 0; i <= num; i++)
    {
       printf("%d\n",fib(i));
    }
    

    return 0;
}
