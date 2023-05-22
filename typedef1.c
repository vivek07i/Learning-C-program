#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} std;

int main()
{
    std s1, s2;
    s1.id = 10;
    s2.id = 90;
    printf("value of s1's id =  %d\n", s1.id);
    printf("value of s2's id =  %d\n", s2.id);


    // typedef <previous_name> <alias_name>

    
    // typedef int integer;
    // typedef unsigned long ul;
    // ul l1, l2, l3;
    // integer a = 4;
    // l1 = (ul)a;
    // l2 = (ul)a;
    // l3 = (ul)a;
    // printf("l1 = %d, l2 = %d, l3 = %d\n", l1, l2, l3);

    return 0;
}
