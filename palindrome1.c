#include<stdio.h>
int main(){
    int n,nr=0,a;
    scanf("%d",&n);
    a=n;
    while(n>0){
        int r=n%10;
        nr=nr*10+r;
        n=n/10;
    }
    //printf("%d %d",a,nr);
    if(a==nr){
    printf("palindrome");
    }
    else{
    printf("not palinfrome");
}
}