/*
Ques: if cost price and selling price of an item is input through the keyboard, write a program to determine whether the seeler has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
*/

#include <stdio.h>
int main()
{
    float cost_price;
    printf("Enter cost price: ");
    scanf("%f", &cost_price);

    float sell_price;
    printf("Enter sell price: ");
    scanf("%f", &sell_price);

    float profit_or_loss;

    if (sell_price > cost_price)
    {
        profit_or_loss = sell_price - cost_price;
        printf("You made profit of Rs. %.2f", profit_or_loss);
    }
    else if (cost_price > sell_price)
    {
        profit_or_loss = cost_price - sell_price;
        printf("you incurred loss of Rs. %.2f", profit_or_loss);
    }
    else
    {
        printf("No profit, no loss");
    }
    return 0;
}