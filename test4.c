#include <stdio.h>

int main()
{
    int num;
    int a=0, b=0, c=0, d=0, e=0;

    printf("Welcome to Fcukmart\n");
    printf("Product's Reciept\n");
start:
    printf("Select Your Products\n 1:Donut:\tRs.10\n 2:SoftDrink:\tRs.75\n 3:Biscuits:\tRs.30\n 4:Milk:\tRs.40\n 5:Bread:\tRs.45\n 6:Exit Shop\n");

    scanf("%d", &num);

    switch (num)
    {

    case 1:
        printf("Enter The Amount\n");
        scanf("%d", &a);
        printf("\n1:Buy Sth Else\n2:Bill\n");
        int x;
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            goto start;
            break;

        case 2:
            goto end;

        default:
            break;
        }

    case 2:
        printf("Enter The Amount\n");
        scanf("%d", &b);
        printf("\n1:Buy Sth Else\n2:Bill\n");
        int y;
        scanf("%d", &y);

        switch (y)
        {
        case 1:
            goto start;
            break;
        case 2:
            goto end;

        default:
            break;
        }
    case 3:
        printf("Enter The Amount\n");
        scanf("%d", &c);
        printf("\n1:Buy Sth Else\n2:Bill\n");
        int z;
        scanf("%d", &z);

        switch (z)
        {
        case 1:
            goto start;
            break;
        case 2:
            goto end;

        default:
            break;
        }

    case 4:
        printf("Enter The Amount\n");
        scanf("%d", &d);
        printf("\n1:Buy Sth Else\n2:Bill\n");
        int m;
        scanf("%d", &m);

        switch (m)
        {
        case 1:
            goto start;
            break;
        case 2:
            goto end;

        default:
            break;
        }
    case 5:
        printf("Enter The Amount\n");
        scanf("%d", &e);
        printf("\n1:Buy Sth Else\n2:Bill\n");
        int n;
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            goto start;
            break;
        case 2:
            goto end;

        default:
            break;
        }
    default:

        goto end;
    }
end:
printf("Item Name\tAmount\tPrice\n");
    printf("Donut\t\t %d\t Rs.%d\t\n", a, a * 10);
    printf("SoftDrink\t %d\t Rs.%d\t\n", b, b * 75);
    printf("Biscuits\t %d\t Rs.%d\t\n", c, c * 30);
    printf("Milk\t\t %d\t Rs.%d\t\n", d, d * 40);
    printf("Bread\t\t %d\t Rs.%d\t\n", e, e * 45);
    printf("Total Price = %d",((a * 10)+ (b * 75)+ (c * 30)+ (d * 40)+ (e * 45)));
    return 0;
}
