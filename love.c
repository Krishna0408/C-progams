#include<stdio.h>
int main(){
    char a;
printf(" Do you Love me ? : yes(y) /no(n)\n Your Input :  ");
scanf(" %s",&a);

while(a!='y'){
    printf("\n   Please   :  ");
    scanf("\n%c",&a);
}
    printf("\n\n Love You too <3 \n\n");
}