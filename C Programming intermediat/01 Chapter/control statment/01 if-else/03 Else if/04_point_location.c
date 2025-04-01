#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter x axis and y axis: ");
    scanf("%d%d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point is origin");
    }
    else if (x == 0)
    {
        printf("lies on y-axis");
    }
    else
    {
        printf("lies on x-axis");
    }

    return 0;
}