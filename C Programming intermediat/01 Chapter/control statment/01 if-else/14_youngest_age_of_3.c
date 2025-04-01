/*
Q. if the ages of Ram, Shyam and Ajay are input through the keybord, write a program to determine the youngest of the three
*/

#include <stdio.h>
int main()
{
    int Ram;
    printf("Enter of Ram: ");
    scanf("%d", &Ram);
    int Shyam;
    printf("Enter of Shyam: ");
    scanf("%d", &Shyam);
    int Ajay;
    printf("Enter of Ajay: ");
    scanf("%d", &Ajay);

    if (Ram > Shyam && Ram > Ajay)
    {
        printf("The youngest of thee is Ram");
    }
    else if (Shyam > Ram && Shyam > Ajay)
    {
        printf("The youngest of thee is Shyam");
    }
    else
        printf("The youngest of thee is Ajay");

    return 0;
}
