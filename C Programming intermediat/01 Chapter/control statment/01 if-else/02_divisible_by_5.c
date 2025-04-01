#include <stdio.h>
int main()
{
    int n;
    printf("Enter a num");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("Divisible by 5");
    }
    else
        printf("Not divisible by 5");
    
    return 0;
}