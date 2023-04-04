#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    scanf("%s",a);
    int n=strlen(a);
    for(int i=0;i<n/2;i++){
       if(a[i]==a[n-i-1]){
        printf("palindrome");
        return 0;
       }   
else{
    printf("not a palindrome");
    return 0;
}
    }
}