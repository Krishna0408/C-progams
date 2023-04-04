#include<stdio.h>
int main(){
    int m, n, p, q, i, j, k;
    int a[10][10], b[10][10], mult[10][10];

    printf("Enter the order of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", &p, &q);

    if(n!=p){
        printf("Matrix is not possible for multiplication\n");
    }
    else{
        printf("Enter the elements of Matrix:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
 printf("Enter the elements of Matrix:\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        }
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            mult[i][j]=0;
                for(k=0;k<p;k++){
                mult[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
     printf("The product of the two matrices is:\n");
      for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",mult[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
