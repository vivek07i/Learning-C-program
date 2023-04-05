#include <stdio.h>
// fibonacci sseries value at different poistion and to find which method is faster

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    printf("Hello World\n");
    int num;
    printf("Enter the index to get the fibonacci series\n");
    scanf("%d", &num);
    printf("The Value of Fibonacci series at poistion %d by iterative approach : %d\n", num, fib_iterative(num));
    printf("The Value of Fibonacci series at poistion %d by recursive approach : %d\n", num, fib_recursive(num));
    return 0;
}

// hence recursive approach is slower than iterative approach this exercise is to find out which method is faster
