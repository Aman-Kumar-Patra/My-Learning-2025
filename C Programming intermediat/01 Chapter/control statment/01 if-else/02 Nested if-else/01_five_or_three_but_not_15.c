/*
Q. Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n);
    /*    if (n % 5 == 0 || n % 3 == 0)
        {
            if (n % 15 != 0)
            {
                printf("the number is divisible by 5 and 3 but not divisible by 15");
            }
            else
                printf("the number  is  divisible by 15");
        }
    */
    // Short
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        printf("the number is divisible by 5 and 3 but not divisible by 15");
    }

    else
        printf("the number  is not divisible by 5 and 3");

    return 0;
}