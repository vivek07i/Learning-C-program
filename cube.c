#include <stdio.h>

int main(int argc, char const *argv[])
{
   
    printf("Enter 0 to start: \n");
     int n;
    scanf("%d", n);

    for (int i = 0; i <= 30; i++)
    {
         printf("%d x %d x %d = %d\n", i, i, i, i * i * i);
    }

    return 0;
}
