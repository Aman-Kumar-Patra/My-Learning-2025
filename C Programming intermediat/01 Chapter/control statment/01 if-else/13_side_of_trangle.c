/*
Q. Take 3 numbers input and tell if they can be the sides of a triangle.
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 num.\n:");
    scanf("%d", &a);
    printf(":");
    scanf("%d", &b);
    printf(":");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("They can be the sides of a tringle.");
    }
    else
        printf("They can't be the sides of a tringle.");

    return 0;
}