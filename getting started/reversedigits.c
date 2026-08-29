#include<stdio.h>
int main()
{
    int num,digit,rev,original;
    printf("Enter five digit number: ");
    scanf("%d", &num);
    rev = 0;
    original = num;
    digit = num%10;
    rev = rev*10 + digit;
    num = num/10;
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num/10;
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num/10;
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num/10;
    digit = num % 10;
    rev = rev * 10 + digit;
    printf("Reverse of %d = %d",original,rev);
    return 0;
}