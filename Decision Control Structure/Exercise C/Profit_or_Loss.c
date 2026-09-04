#include<stdio.h>
int main()
{
    float costprice,sellingprice,profit,loss;
    printf("Enter Cost Price of item: ");
    scanf("%f",&costprice);
    printf("Enter Selling Price of item: ");
    scanf("%f",&sellingprice);
    if(sellingprice>costprice)
    {
        profit=sellingprice-costprice;
        printf("Seller has made profit\nProfit Made:%.2f",profit);
    }
    else if(costprice>sellingprice)
    {
        loss=costprice-sellingprice;
        printf("Seller has incurred loss\nLoss Incurred:%.2f",loss);
    }
    else
    {
        printf("Seller has made neither profit nor incurred loss");
    }
    return 0;
}