#include <stdio.h>

// Binary Search Function
int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if the target is present at the middle
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;

        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If the target is not found
    return -1;
}

int main()
{
    int arr[] = {2, 4, 7, 10, 14, 20, 25};
    int target = 10;
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, arrSize - 1, target);

    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index %d.\n", result);

    return 0;
}