#include <stdio.h>

int main()
{
    char a = '3';
    char *ptra = &a;
    printf("%d\n", ptra);
    ptra++;
    printf("%d\n", ptra);
    ptra--;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 2);
    

    // here adding 1 will add 1 size of int/char in address of a in this architecture(arch varies with program)
    // char take size of 1
    // int take size of 4

    return 0;
}
