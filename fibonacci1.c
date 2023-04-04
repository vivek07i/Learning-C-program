#include <stdio.h>

// fibonacci series by iteration method.

int main(int argc, char const *argv[])
{
    printf("Hello World\n");

    int t1 = 0;
    int t2 = 1;
    int next = t1 + t2;
    int num;

    printf("Enter the Number of upto which You want the fibonacci series\n");
    scanf("%d", &num);

    printf("Fibnocci Series upto %d : \n", num);

    printf("The fibonacci series are\n%d\n%d\n", t1, t2);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }

    return 0;
}
