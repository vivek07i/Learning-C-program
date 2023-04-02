#include <stdio.h>

int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometer = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the Input character.\n q to quit\n");
        printf("    1. Km to miles\n    2. Inches to Foot\n    3. Cm to Inches\n    4. Pound to Kgs\n    5. Inches to Meter\n");

        scanf("%c", &input);

        switch (input)
        {
        case 'q':

            printf("You Left The Program");
            goto end;
            break;

        case '1':
            
            printf("Enter quantity in terms of !st unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%f kms is equal to %f miles\n", first, second);
            goto end;
            break;

        case '2':
            
            printf("Enter quantity in terms of !st unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f inches is equal to %f foots\n", first, second);
             goto end;
            break;

        case '3':
            
            printf("Enter quantity in terms of !st unit\n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f cm is equal to %f inches\n", first, second);
             goto end;
            break;

        case '4':
            
            printf("Enter quantity in terms of !st unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f pounds is equal to %f kgs\n", first, second);
             goto end;
            break;

        case '5':
            
            printf("Enter quantity in terms of !st unit\n");
            scanf("%f", &first);
            second = first * inchestometer;
            printf("%f inches is equal to %f meter\n", first, second);
             goto end;
            break;

        default:
            break;
        }
    }
end:
    return 0;
}
