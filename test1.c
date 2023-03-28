#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d" , &a);

    printf("Table of %d\n", a);
    
    int b=a;

    printf("%d x 1 = %d\n", b, a*1);
    printf("%d x 2 = %d\n", b, a*2);
    printf("%d x 3 = %d\n", b, a*3);
    printf("%d x 4 = %d\n", b, a*4);
    printf("%d x 5 = %d\n", b, a*5);
    printf("%d x 6 = %d\n", b, a*6);
    printf("%d x 7 = %d\n", b, a*7);
    printf("%d x 8 = %d\n", b, a*8);
    printf("%d x 9 = %d\n", b, a*9);
    printf("%d x 10 = %d\n", b, a*10);
    
   
    return 0;
}
