#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    printf("\n");
    int marks[3][4] = {{10, 20, 30, 40,}, {45, 25, 62, 48}, {35, 27, 55, 98}, };

    // below method can also be used to but if u want the user to put the input. if you have the input then u put it directlyin the program
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n",i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 3; i++)
    {
        // i is number of bracketts and j is number of inputs in the brackett{}
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of the array is %d.\n", i, j, marks[i][j]);
            printf(" %d ", marks[i][j]);
        }

        printf("\n");

    
    }

    /*marks[0] = 34;
    printf("Marks of student 1 is %d\n", marks[0]);

    marks[1] = 45;
    printf("Marks of student 2 is %d\n", marks[1]);*/

    return 0;
    ;
}
