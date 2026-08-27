#include<stdio.h>
int main()
{
    float distance_km, distance_meters, distance_cm, distance_feet, distance_inches;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &distance_km);
    distance_meters = distance_km * 1000;
    distance_cm = distance_meters * 100;
    distance_feet = distance_meters * 3.281;
    distance_inches = distance_feet * 12;
    printf("Distance in meters: %.2f\n", distance_meters);
    printf("Distance in centimeters: %.2f\n", distance_cm);
    printf("Distance in feet: %.2f\n", distance_feet);
    printf("Distance in inches: %.2f\n", distance_inches);
    return 0;
}