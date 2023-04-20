#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter 0 to start the sqaure list\n");
    int num;
    scanf("%d", &num);
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            printf("%d X %d = %d \n", i, j, i * j);
        }
    }

    return 0;
}
