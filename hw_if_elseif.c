#include<stdio.h>
int main()
{
int values;
printf("enter the mark:");
scanf("%d",&values);
if(values <= 100 && values >95){printf("Gold Medalist");}
else if(values <=95 && values >=90) {printf("silver medalist");}
else if(values <90 && values >=85) {printf("bronze medalist");}
else{printf("\nAverage\n");}
return 0;
}
