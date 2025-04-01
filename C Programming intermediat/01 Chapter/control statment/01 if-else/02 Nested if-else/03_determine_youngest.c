/*
Q. if the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three
*/
#include <stdio.h>
int main()
{
    int Ram;
    printf("Enter age of Ram: ");
    scanf("%d",&Ram);
    int Shyam;
    printf("Enter age of Shyam: ");
    scanf("%d",&Shyam);
    int Ajay;
    printf("Enter age of Ajay: ");
    scanf("%d",&Ajay);

    if (Ram > Shyam)
    {
        if (Ram > Ajay)
        {
            printf("Youngest is Ram");
        }
        else
            printf("Youngest is Ajay");
    }
    else
        {
            if (Shyam > Ajay)
            {
                printf("Youngest is Shyam");
            }
            else
                printf("Youngest is Ajay");
            
        }
    
    return 0;
}