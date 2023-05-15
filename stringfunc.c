#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Vivek";
    char s2[] = " Bishika";
    char s3[50];
    //  s3 =  Vivek Bishika

    printf("\n");
    // used to copy strings.
    strcpy(s3, strcat(s1, s2));
    printf("s3 is : \n");
    puts(s3);


    printf("\n");
    // combine to strings.
           // puts(strcat(s1, s2));
    // if we uncomment this the length of s1 will increase.


    printf("\n");
    // gives the lentgh of the string.
    printf("The length of s3 is %d\n", strlen(s3));
    // if u want the length of s1 remove strcat().
    printf("The length of s2 is %d\n", strlen(s2));


    printf("\n");
    // used to reverse the strings.
    printf("The reverse of string  : \n");
    puts(strrev(s3));
    puts(strrev(s2));


    // used to compare strings.
    printf("\n");
    printf("The strcmp for s1 and s2 returned %d", strcmp(s1, s2));
    //  this will give +,-,0 value depending on the 1st letter of both string.
    // depending on ascii values of letters
    //  - if s1 is v and s2 is b,    + if s1 is b and s2 is v,     0 if s1 is v and s2 is v.


    return 0;
}
