#include<stdio.h>
int main()
{
    int number, sum = 0, digit;
    printf("Enter a five digit number: ");
    scanf("%d", &number);
    digit = number % 10;
    sum = sum + digit;
    number = number / 10;
    digit = number % 10;
    sum = sum + digit;
    number = number / 10;
    digit = number % 10;
    sum = sum + digit;
    number = number / 10;
    digit = number % 10;
    sum = sum + digit;
    number = number / 10;
    digit = number % 10;
    sum = sum + digit;
    printf("Sum of digits: %d\n", sum);
    return 0;
}