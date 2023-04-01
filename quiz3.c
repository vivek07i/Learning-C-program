#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Convert cm to foot


    printf("Hello World\n");

    float l;
    printf("Enter Length in cm\n");
    scanf("%f",&l);

    printf("Value of input length in foot is %.4f\n", l/30.48);
    printf("%.2f = %.2f",l, l/30.48);

    return 0;
}