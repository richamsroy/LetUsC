#include<stdio.h>
int main()
{
    float selling_price15, total_profit,cost_price15, cost_price;
    printf("Enter selling price of 15 items: ");
    scanf("%f", &selling_price15);
    printf("Enter profit on 15 items: ");
    scanf("%f", &total_profit);
    cost_price15 = selling_price15 - total_profit;
    cost_price = cost_price15 / 15.0;
    printf("Cost Price of one item : %f",cost_price);
    return 0;
}