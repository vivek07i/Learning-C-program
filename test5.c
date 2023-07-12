#include <stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}

int main()
{
    int arr[] = {10, 28, 34, 46, 52, 69, 77};

    printf("Before Reversing The array\n\n");

    for (int i = 0; i < 7; i++)
    {
        printf("The value of Element %d is %d\n", i, arr[i]);
    }

    arrayRev(arr);
    printf("\n");

    printf("After Reversing The array\n\n");

    for (int i = 0; i < 7; i++)
    {
        printf("The value of Element %d is %d\n", i, arr[i]);
    }

    return 0;
}
