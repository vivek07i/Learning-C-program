#include <stdio.h>

int main()
{
    // typedef <previous_name> <alias_name>
    
    // int *m, b; // here b is not pointer we can use typedef to make it pointer
    // int c = 4;
    typedef int* intptr;
    intptr m, b; // now both a and b are pointer.
     int c = 84;
     int d= 32;
     m = &c;
     b = &d;
     printf("m = %d\nb = %d\n", *m, *b);



    // basically it changes defined name of anything to user defined name
    typedef int integer;
    typedef unsigned long ul;
    ul l1, l2, l3;
    integer a = 4;
    l1 = (ul)a;
    l2 = (ul)a;
    l3 = (ul)a;
    printf("l1 = %d, l2 = %d, l3 = %d\n", l1, l2, l3);

    return 0;
}
