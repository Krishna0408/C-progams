#include<stdio.h>
int main(){
    int a,flag=0;
    scanf("%d",&a);
    for(int i=2;i<a/2;i++){
        if(a%i==0){
            printf("%d ",i);
    }
    }
    

}