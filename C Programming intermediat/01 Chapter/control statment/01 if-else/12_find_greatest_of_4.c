/*
Q. Take 3 positive integers input and print the greatest of them.
*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter 4 num.\n:");
    scanf("%d", &a);
    printf(":");
    scanf("%d", &b);
    printf(":");
    scanf("%d", &c);
    printf(":");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("Greatest num is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("Greatest num is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("Greatest num is %d", c);
    }
    else
        printf("Greatest num is %d", d);

    return 0;
}