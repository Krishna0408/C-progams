#include<stdio.h>

int main()
{
    int i,j,m,n,x,a[100],b[100];
    scanf("%d",&m);
    for(i=0;i<m;i++){
    scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&b[i]);
    }
    scanf("%d",&x);

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if (a[i]+b[j]==x) {
                printf("%d %d\n",a[i],b[j]);
            }
        }
    }

    return 0;
}
