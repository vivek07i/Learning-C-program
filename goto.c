#include <stdio.h>

int main(int argc, char const *argv[])
{
//   use of goto



//   used to transfer anywhere using goto *name* and then start code from *name*: code.
// avoided to prevent confusion for felloe programmer.


    // label:
    // printf("We are in Label\n");
    // goto end;

    // printf("Hello World\n");

    // end:
    // printf("We are outside label");

    // goto vivek;

    // vivek:
    // printf("This mean u can transfer to anywhere using goto\n");


    for (int i = 0; i < 10; i++)
    {
        int num; 
        printf("%d\n", i);
        for (int j = 0; j < 15; j++)
        {
            printf("Enter Number\nEnter 0 to exit\n Here\n");
            scanf("%d",&num);

            if (num==0){
            goto vivek;
            // mostly goto used to break multiple loop inside loop, otherwise don't use it as it provides confusion
            }
        }
        
    }
    
    vivek:
     printf("Over bcoz u entered 0\n");


    return 0;
}

