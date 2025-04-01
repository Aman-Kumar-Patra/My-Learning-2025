#include <stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n);

    if (n > 99 && n <= 999)
    {
        printf("%d is a three digit number", n);
    }
    else
        printf("%d is a not three digit number", n);
    return 0;
}