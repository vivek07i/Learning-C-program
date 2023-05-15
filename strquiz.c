#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s1[20] , s2[20];
    
    printf("Enter Two names : \n");
    gets(s1);
    gets(s2);
    
    printf("You Entered : \n");
    puts(s1);
    puts(s2);
    printf("They are friends.");
    return 0;
}
