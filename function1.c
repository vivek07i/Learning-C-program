#include <stdio.h>
// 1> Without argument and without return
void myname()
{
    printf("Sesto Elemento");
 }


// 2> With argument and Return Value
int sum(int a, int b)
{
    return a+b;
}

// 3> Without argument and with return value
int takenumber()
{
    int i;
    printf("Enter a Number\n");
    scanf("%d", &i);
    printf("The number Entererd is %d\n",i);
    return i;
}

// 4> With argument and with return value
void printstar (int n)
{for (int i = 0; i < n; i++)
{
    printf("%c",'*');
}
}


int main()
{
    // 1>
    printf("My name is : ");
    myname();
         //    return 0;


    // 2>
    int a, b, c;
    a = 45;
    b = 87;
    c = sum(a,b);
    printf("\nThe sum is %d\n",c);
         //    return0;

    // 3>
    int d;
    d = takenumber();
    // return 0;

    // 4>
    printstar(7);
    return 0; 


}


