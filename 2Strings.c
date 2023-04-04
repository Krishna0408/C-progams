#include<stdio.h>
int main()
{
    int a,b;
    int choice;

    printf("1.addition \n 2.subtraction \n 3.division \n 4.multiplication");
    printf("\nenter the values of a & b: ");
    scanf("%d%d",&a,&b);
    printf("\nenter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2:
        printf("diff of %d and %d is : %d",a,b,a-b);
        break;
    case 3:
        printf("multiplication of %d and %d is: %d",a,b,a*b);
        break;
    case 4:
        printf("division of %d and %d is: %d",a,b,a/b);
    break;
    }
    return 0;

}
