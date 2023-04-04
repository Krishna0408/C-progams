#include<stdio.h>
int main(){
    int a[]={1721,979,366,299,675,1456};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<5;j++){
        if((a[i]+a[j])==2020){
            printf("%d",a[i]*a[j]);
            break;
        }
        }
    }
}