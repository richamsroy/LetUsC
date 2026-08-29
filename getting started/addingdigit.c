#include<stdio.h>
int main()
{
    int num, original, sum, digit;
    printf("Enter five digit number: ");
    scanf("%d", &num);
    original = num;
    sum = 0;
    digit = num / 10000;
    num = num % 10000;
    sum = sum*10 + ((digit+1)%10);
    digit = num / 1000;
    num = num % 1000;
    sum = sum*10 + ((digit+1)%10);
    digit = num /100;
    num = num % 100;
    sum = sum*10 + ((digit+1)%10);
    digit = num /10;
    num = num % 10;
    sum = sum * 10 + ((digit+1)%10);
    digit = num /1;
    sum = sum * 10 + ((digit+1)%10);
    printf("New number after adding one to each of it's digits : %d", sum);
    return 0;
}