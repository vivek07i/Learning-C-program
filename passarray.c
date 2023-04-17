#include <stdio.h>
// array may be or may not be same as arr


int func1(int array[])
// array as parameter
{
    for (size_t i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 254;
    // [Very imp] if we cahnge the vvalue at function then the vavlue will be changed in the main()
    return 0;
}


void func2(int *ptr)
{
    for (size_t i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 69;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{
    int arr[][2] = {{23, 13}, {34, 56}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);

    func3(arr);

    return 0;
}
