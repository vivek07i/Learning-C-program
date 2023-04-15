#include <stdio.h>

int main()
{
    int num;
    int amt;
    printf("Welcome to Fcukmart\n");
    printf("What You want to Buy?\n");
start:
    printf("Select Your Products\n 1:Donut\n 2:SoftDrink\n 3:Biscuits\n 4:Milk\n 5:Bread\n 6:Exit Shop\n");

    scanf("%d", &num);
    while (num)
    {
        switch (num)
        {

        case 1:
            printf(" Enter The Amount\n");
            scanf("%d", &amt);
            printf("%d Donut Will be Delivered\n", amt);
            goto start;

        case 2:
            printf(" Enter The Amount\n");
            scanf("%d", &amt);
            printf("%d SoftDrinks Will be Delivered\n", amt);
            goto start;

        case 3:
            printf(" Enter The Amount\n");
            scanf("%d", &amt);
            printf("%d Biscuits Will be Delivered\n", amt);
            goto start;

        case 4:
            printf(" Enter The Amount\n");
            scanf("%d", &amt);
            printf("%d Milk Will be Delivered\n", amt);
            goto start;

        case 5:
            printf(" Enter The Amount\n");
            scanf("%d", &amt);
            printf("%d Bread Will be Delivered\n", amt);
            goto start;

        default:
            printf("You bought Nothing\n");
            goto end;
        }
    }

    
end:
    return 0;
}
