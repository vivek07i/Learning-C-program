#include <stdio.h>

int main()
{

    int a, b, c;
Start:
    printf("Enter 3 Distinct Number\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b || a == c || b == c)
    {
        printf("The Numbers are Equal");
        goto Start;
    }
    else
        for (int i = 0; i < 3; i++)
        {

            printf("%d\n%d\n%d\n", a * 100 + b * 10 + c, b * 100 + c * 10 + a, c * 100 + a * 10 + b);
            int t = a;
            a = c;
            c = t;
        }

    return 0;
}
