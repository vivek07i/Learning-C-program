#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union student s1;;
    strcpy(s1.name, "vivek");
    s1.marks = 45;
    s1.fav_char = 'u';
    s1.id = 1;

    printf("ID is %d\n",s1.id);
    printf("Marks is %d\n",s1.marks);
    printf("Fav Character is %d\n",s1.fav_char);
    printf("Name is %d\n",s1.name);
    
    //everything corrupts except any one of them which is kept at bottom
    return 0;
}
