#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
};
struct Student harry, vivek, kirti;
void print()
{
    printf("%s", harry.name);
}

int main()
{
    
    harry.id = 1;
    harry.marks = 90;
    harry.fav_char = 'a';
    printf("harry id is %d\n", harry.id);
    printf("harry marks is %d\n", harry.marks);
    printf("harry fav_char is %c\n", harry.fav_char);
    printf("\n");

    vivek.id = 2;
    vivek.marks = 80;
    vivek.fav_char = 'b';
    printf("vivek id is %d\n", vivek.id);
    printf("vivek marks is %d\n", vivek.marks);
    printf("vivek fav_char is %c\n", vivek.fav_char);
    printf("\n");
    
    kirti.id = 3;
    kirti.marks = 85;
    kirti.fav_char = 'c';
    printf("kirti id is %d\n", kirti.id);
    printf("kirti marks is %d\n", kirti.marks);
    printf("kirti fav_char is %c\n", kirti.fav_char);
    printf("\n");

    strcpy(harry.name, "Harry Potter is student of the year");
    printf("Harry is name is : %s\n",harry.name);

    printf("\n");

    // using global variable and recursion method 
    print();
    
    return 0;
}

