#include <stdio.h>

int main()
{/*this is a code for ur exam and ur marks are displayed. this code helps you get ur reward*/
    printf("Your Reward is based on  your performance\n");
    printf("Enter your marks\n");

    int marks;
    scanf("%d", &marks);

   if (marks>=30)
    {
        printf("YOu passsed both subject and rewarded chocolate\n");
    }
    

    else if (marks>15)
    {
        printf("You passed only one subject and rewarded 5 candies\n");

        int a;
        printf("select ur subject, 1 for maths and 2 for science\n");
        scanf("%d", &a);

        if (a==1)
        {
           printf("You have passed maths\n");
           printf("You have failed science\n");
        }
        
        if (a==2)
        {
            printf("You have passed science");
            printf("You have failed maths\n");

        }
       

    }
    else if (marks>=0)
    {printf("You have Failed and you are not getting any reward, call your parents to the school");}


   
    return 0;
}

