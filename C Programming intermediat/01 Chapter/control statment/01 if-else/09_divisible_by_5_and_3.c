/*
Q. Take positive integer input and tell if it is divisible by 5 and 3.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("yes it divisble by 5 and 3");
    }
    else
        printf("It not divisble by 5 and 3");

    return 0;
}