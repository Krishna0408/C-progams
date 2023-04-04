#include<stdio.h>
#define PI 3.14159
void circle_formula(float r)
{
    float area,circum;
    area=PI*r*r;
    printf("area=%.2f\n",area);
    circum=2*PI*r;
    printf("circumference=%0.3f\n",circum);
}
void main()
{
    float r=5;
    circle_formula(r);
}
