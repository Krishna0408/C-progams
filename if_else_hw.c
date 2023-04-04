#include<stdio.h>
int main()
{
    int t;
    printf("Enter Threashold Value :");
    scanf("%f",&t);
    if(t>=50.5)
    {
        printf("\n Water Is Needed");
    }
    else
    {
    printf("\nWater Is Not Needed");
    }
    return 0;
}
