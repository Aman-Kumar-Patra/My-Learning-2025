/*
Q. Given the length and breadth of a rectangle write a program to find whether the area of the rectangle is greater than its perimeter.
*/
#include <stdio.h>
int main()
{
    float lenght, breadth;
    printf("Enter length: ");
    scanf("%f", &lenght);

    printf("Enter length: ");
    scanf("%f", &breadth);

    if (lenght * breadth > 2 * (lenght + breadth))
    {
        printf("Yes The area of the rectangle is grater than it's parimeter.");
    }
    else
        printf("No The area of the rectangle is not grater than it's parimeter.");

    return 0;
}