#include <stdio.h>

int main()
{
    printf("Counting 1 to 10\n");
    for (int i = 1; i <= 10; ++i)
    {
        if (i == 5)
            continue;
        else
            printf("%d ", i);
    }

    return 0;
}
