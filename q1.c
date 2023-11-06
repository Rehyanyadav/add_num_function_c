// WAP to add two numbers entered through the keyboard by using a suitable user defined function.
#include <stdio.h>

int add_number(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int a;
    int b;
    printf("enter 1st num:");

    scanf("%d", &a);

    printf("enter 2nd num:");

    scanf("%d", &b);

 printf("sum is :%d",add_number(a,b));

    return 0;
}