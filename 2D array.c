#include<stdio.h>
int main(){
   int n1,n2;
   int i,j;
   printf("Enter the size of arrays");
   scanf("\n%d %d",&n1,&n2);
   int arr[n1][n2];
   for(i=0; i<n1; i++){
      for(j=0;j<n2;j++){
         printf("Enter value for %d %d:",i,j);
         scanf("%d",&arr[i][j]);
      }
   }

   printf("\nTwo Dimensional array elements:\n");
   for(i=0; i<n1;i++){
      for(j=0;j<n2;j++){
         printf("%d ",arr[i][j]);
            if(j==n2-1){
            printf("\n");
         }
      }
   }
   return 0;
}
