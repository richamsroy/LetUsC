#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,aggregate,percentage;
    printf ("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1,&m2,&m3,&m4,&m5);
    aggregate = m1+m2+m3+m4+m5;
    percentage = aggregate/5;
    printf("Aggregate marks: %.2f\n", aggregate);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}