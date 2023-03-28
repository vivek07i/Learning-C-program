#include <stdio.h>
#define b 58

int main()
{
    printf("Hello World\n");

    /*this is used for comment of multiple line and it wont be in output as the compiler 
    
    will ignore whatever in this brackett*/

    float a=7.265;
    double c = 65.164652;

    //if i take value of b different than 58 it will show error bcoz i have defined it to be 58 in preprocessor



    printf("%d\n",b);
    printf("%-5.4f thi\n", a);
    printf("%lf send nudes\n", c);

    printf("My tsb character \t\t My backslash\\\n And my new line\n");
    printf("Hello World\\n\n"); // we can print \n by using \\n
    printf("Hello World\a"); // for windows sound
    return 0;
}

