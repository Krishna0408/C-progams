#include<stdio.h>
int main()
{
int a=0,n;
printf("Enter N: ");
scanf("%d",&n);
do{
    printf("IT is the best\n");
    a++; //return 0 if you want to print the statement only one time !
}
while(a<n);
}
