#include <stdio.h>

int main(int argc, char const *argv[])
{
    // table to convert celsius to fahrenheit


    printf("Hello World\n");

    float c;
    printf("Enter Temperature in Celcius\n");
    scanf("%f",&c);

    printf("Your Fahrenheit is %.4f\n", (1.8*c) + 32);
    printf("%.2f 'C  = %.2f F", c, (1.8*c) + 32);

    
        return 0;
}
