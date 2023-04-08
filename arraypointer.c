#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99}; //  we cant use arr++ bcoz arr is constant but
    // position is 0,1,2,3,4,5,6,7,8.
    int *arrptr = arr; // here we can use arrptr ++

    printf("Value of position 3 of the array is %d\n", arr[3]);
    printf("The address of element at 1st position is %d\n", &arr[0]);
    printf("The address of element at 1st position is %d\n", arr); // this is pointer arithmetic

    printf("The address of element at 2nd position is %d\n", &arr[1]);
    printf("The address of element at 2nd position is %d\n", arr + 1); // this is pointer arithmetic

    printf("The address of element at 3rd position is %d\n", &arr[2]);
    printf("The address of element at 3rd position is %d\n", arr + 2); // this is pointer arithmetic

    // here size of int is 4. therefore adding 1 in address of arr[2] adds 4 in its address to reach aarr[3]
    // also &arr[0] is same as arr
    printf("\n");

    printf("The value of element at 1st position is %d\n", *(&arr[0]));
    printf("The value of element at 1st position is %d\n", arr[0]);
    printf("The value of element at 1st position is %d\n", *(arr));

    printf("The value of element at 2nd position is %d\n", *(&arr[1]));
    printf("The value of element at 2nd position is %d\n", arr[1]);
    printf("The value of element at 2nd position is %d\n", *(arr + 1));

    return 0;
}
