#include <stdio.h>
int sum(int a, int b)

// here we declared the function

{
    return a + b;
}


//  here we define the function 

int main()
{
    int a, b ,c;
    a = 56;
    b = 98;
    c = sum(a, b);



// here we called the funtion

    printf("Sum is %d\n", c);
    return 0;
}

