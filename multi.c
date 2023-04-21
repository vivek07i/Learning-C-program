#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter 0 to start the sqaure list\n");
    int num;

    scanf("%d", &num);
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                printf("%d x %d x %d = %d\n", i, j, k, i * j * k);
            }
        }
    }

    return 0;
}
