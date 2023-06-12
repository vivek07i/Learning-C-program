#include <stdio.h>

int main()
{
    // We can change values here for
    // different inputs
    float P, R, T;
    printf("Enter Ur varaibles(PTR)\n");
    scanf("%f%f%f", P, T, R);

    // Calculate simple interest
    float SI = (P * T * R) / 100;

    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

    return 0;
}