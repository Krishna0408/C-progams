#include<stdio.h>
int main(){
    int a[]={12,14,1969,1000756};
    int b[4];
    for(int i=0;i<4;i++){
        b[i]=(a[i]/3)-2;
    }
    // for(int i=0;i<4;i++){
    //     printf("%d ",b[i]);
    // }
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+b[i];
    }
    printf("Total cost for fuel is %d",sum);
}