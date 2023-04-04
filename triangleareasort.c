#include<stdio.h>
#include<math.h>
int main(){
    int a[3],i,j,n,S[3],s;
    float p;
    scanf("%d",&n);
    for(j=0;j<n;j++){
    for(i=0;i<3;i++){
    scanf("%d",&a[i]);
    }
    }
    for(j=0;j<n;j++){
    //int p=0;
    for(i=0;i<3;i++){
        p=p+a[i];
    }
    p=p/2;
    //int s;
    for(i=0;i<1;i++){
    s=p*(p-a[i])*(p-a[i+1])*(p-a[i+2]);
    }
    float q=sqrt(s);
    printf("%d \n",q);
    for(i=0;i<n;i++){
        S[i]=q;
    }
    for(i=0;i<n;i++){
        
    printf("%d ",S[i]);
    }
}
}
