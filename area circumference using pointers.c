#include<stdio.h>
void area_peri(float, float*, float*);
int main()
{
    float radius, area, perimeter;
    printf("Enter radius \n");
    scanf("%f", &radius);
    area_peri(radius, &area, &perimeter);
    printf("\nArea = %.3f\n", area);
    printf("Perimeter = %.3f\n", perimeter);
    return 0;
}
void area_peri(float r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}
