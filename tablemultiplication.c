#include <stdio.h>

int main(int argc, char const *argv[])
{

    // make a multiplication table for any number using loop 


    
    int num ;
    printf("Enter You Number\n");
    scanf("%d", &num);

    printf("Multiplication Table of %d : \n", num);


    int i;
    for (i = 1; i <= 20; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    
    
    return 0;
}