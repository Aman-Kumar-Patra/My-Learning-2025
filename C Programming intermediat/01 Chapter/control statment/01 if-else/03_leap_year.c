#include <stdio.h>
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);

    if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
    {
        printf("Yes This Year is a leap Year..!!");
    }
    else
        printf("No It's not a leap year '-' ");

    return 0;
}