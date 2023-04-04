#include<stdio.h>
int main(){
    int a,flag=0;
    scanf("%d",&a);
    if(a==1 || a==0){
        flag=1;
    }
    for(int i=2;i<a/2;i++){
        if(a%i==0){
        flag=1;
        break;
    }
    }
    if (flag == 0)
    printf("%d is a prime number.", a);
    else
    printf("%d is not a prime number.", a);

}