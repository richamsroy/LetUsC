#include<stdio.h>
int main()
{
    float length_rectangle, breadth_rectangle, radius_circle, circumference_circle, perimeter_rectangle, area_rectangle, area_circle;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%f %f", &length_rectangle, &breadth_rectangle);
    printf("Enter the radius of circle: ");
    scanf("%f", &radius_circle);
    perimeter_rectangle = 2 * (length_rectangle + breadth_rectangle);
    area_rectangle = length_rectangle * breadth_rectangle;
    circumference_circle = 2 * 3.14 * radius_circle;
    area_circle = 3.14 * radius_circle * radius_circle;
    printf("Perimeter of rectangle: %.2f\n", perimeter_rectangle);
    printf("Area of rectangle: %.2f\n", area_rectangle);
    printf("Circumference of circle: %.2f\n", circumference_circle);
    printf("Area of circle: %.2f\n", area_circle);
    return 0;
}