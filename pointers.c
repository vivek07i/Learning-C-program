#include <stdio.h>

int main()
// pointers is a variable which store another variable.
{
    printf("Lets learn about pointers\n");
    int a = 69;
    int *ptra = &a;
    int* ptrb = NULL;

    // value of a
    printf("The value of a is %p\n", *ptra);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);

    // address of a
    printf("The address of a is %p\n", &a);
    printf("The address of pointer to a is %p\n", ptra);

    // address of pointer
    printf("The address of pointer is %x\n", ptra);

    // null pointer
    printf("The address of garbage is %p\n", ptrb);



    return 0;
}
