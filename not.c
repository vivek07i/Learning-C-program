#include <stdio.h>

int main()
{
    int num;
    printf("For the boys and girls.\n");
    scanf("%d", &num);
    if (num == 1)
        printf("Boys");
    else if (num == 2)
        printf("Girls");

    return 0;
}
