#include <stdio.h>

void change(int *address1, int *address2)
{
    *address1 = 345;
    *address2 = 256;
}

int main()
{
    int a = 34, b = 56;
    printf(" The value of a is %d and value of b is %d\n", a, b);
    change(&a, &b);
    printf(" The value of a is %d and value of b is %d\n", a, b);

    return 0;
}
