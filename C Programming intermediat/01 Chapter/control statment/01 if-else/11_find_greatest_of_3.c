/*
Q. Take 3 positive integers input and print the greatest of them.
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

    if (a > b && a > c)
    {
        printf("Greatest num is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("Greatest num is %d", b);
    }
    else
        printf("Greatest num is %d", c);

    return 0;
}