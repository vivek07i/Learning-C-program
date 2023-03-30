#include <stdio.h>

int main(int argc, char const *argv[])
{

    int age, marks;
    printf("Enter your age\n");
    scanf("%d",&age);

    printf("Enter your marks\n");
    scanf("%d",&marks);



  /*break stops compiler to read further code if there is not break after any case the code will run untill it finds a break and 
  there is no need to put break in default */

  /*if the case 13 is used then it will ignore case 3 and stop after case 13 bcoz there is a break*/


    switch (age)
    {
    case 3:
        printf("Age is 3\n");
        
        
        switch (marks)
        {
        case 45:
            printf("you passed");
            break;
        
        default:
        printf("you failed");
            break;
        }

        break;

    case 13:
        printf("Age is 13\n");
        break;




    case 23:
        printf("Age is 23\n");
        break;
        
    default:
    printf("Age is not any of this\n");
        break;
    }
    return 0;
}
