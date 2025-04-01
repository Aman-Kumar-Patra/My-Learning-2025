#include <stdio.h>
int main()
{
    int n;
    printf("Enter a num: ");
    scanf("%d",&n);

    if (n > 5)
    {
        printf("%d is greater then 5",n);
    }
    else
        printf("%d is not greater then 5",n);

    return 0;
}