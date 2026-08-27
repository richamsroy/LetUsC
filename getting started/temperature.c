#include<stdio.h>
int main()
{
    float temperautre_fahrenheit, temperature_centigrade;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temperautre_fahrenheit);
    temperature_centigrade = (temperautre_fahrenheit - 32) * 5/9;
    printf("Temperature in Centigrade: %.2f\n", temperature_centigrade);
    return 0;
}