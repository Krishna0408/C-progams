#include<stdio.h>
int main() {
    int a[20];
    int count[128] = {0};
    int n,i;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    for(i=0;i<n;i++){
        if(count[a[i]] > 1)
            printf("%d ", a[i]);
    }
    return 0;
}
