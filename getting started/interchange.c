#include<stdio.h>
int main()
{
    int c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &c, &d);
    printf("Before swapping: c = %d, d = %d\n", c, d);
    c = c + d;
    d = c - d;
    c = c - d;
    printf("After swapping: c = %d, d = %d\n", c, d);
    return 0;
}