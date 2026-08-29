#include<stdio.h>
int main()
{
    int population, women, men, litper, litper_men, litper_women, illit_men, illit_women;
    float lit_men, lit_women;
    population = 80000;
    litper = 48;
    litper_men = 35;
    litper_women = litper-litper_men;
    men = (52.0/100.0)*80000;
    women = population - men;
    lit_men = (litper_men/100.0)*men;
    illit_men = men - (int)lit_men; /*To prevent implicit conversions*/
    lit_women = (litper_women/100.0)*women;
    illit_women = women - (int)lit_women; /*To prevent implicit conversions*/
    printf("Number of illiterate men = %d ", illit_men);
    printf("\nNumber of illiterate women = %d", illit_women);
    return 0;
}