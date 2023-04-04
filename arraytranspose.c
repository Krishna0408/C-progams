#include<stdio.h>
int main(){
    int a[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(i==0 && j==0) {
                printf("%d",a[1][1]);
            }
            else if(i==1 && j==1){
                printf("%d",a[0][0]);
            }
            else if((i==0 && j==1) ||  (i==1 && j==0)){
                printf("-%d ",a[i][j]);
            }
        }printf("\n");
    }

}