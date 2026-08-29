#include<stdio.h>
int main()
{
    float amount_in_hundreds;
    int amount, tens, fifties, hundreds, original;
    printf("Enter amount to be withdrawn in hundreds: ");
    scanf("%f", &amount_in_hundreds);
    amount = (int)(amount_in_hundreds*100);
    original = amount;
    hundreds = amount / 100;
    amount = amount % 100;
    fifties = amount / 50;
    amount = amount % 50;
    tens = amount / 10;
    printf("Number of 100s to give : %d", hundreds);
    printf("\n Number of 50s to give : %d", fifties);
    printf("\n Number of 10s to give : %d", tens);
    return 0;
}