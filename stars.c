// quiz to create star patter
#include <stdio.h>

int main()
{
    int num;
    char x = '*';
    int a, b;
    printf("Choose Type of pattern\n");
    printf("0 - Star Pattern\n");
    printf("1 - Reverse Star Pattern\n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Select Number of pattern\n");
        scanf("%d", &a);
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (num == 1)
    {
        printf("Select Number of pattern\n");
        scanf("%d", &b);
        for (int i = b; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        goto end;
    }

end:

    return 0;
}
