#include<stdio.h>
int main()
{
    int num,sum,first,last,original;
    printf("Enter four digit number: ");
    scanf("%d", &num);
    original = num;
    last = num%10;
    num = num/10;
    num = num/10;
    first = num/10;
    sum = last + first;
    printf ("Sum of first and last digit of %d = %d", original, sum);
    return 0;
}  