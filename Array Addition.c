#include<stdio.h>
int main(){
   int n1,n2;
   int i,j;
   int arr3[i][j];
   printf("Enter the size of arrays:");
   scanf("\n%d %d",&n1,&n2);
   int arr1[n1][n2];
   for(i=0; i<n1; i++){
      for(j=0;j<n2;j++){
         printf("Enter value for first array %d %d:",i,j);
         scanf("%d",&arr1[i][j]);
      }
   }
   printf("\nFirst array elements:\n");
   for(i=0; i<n1;i++){
      for(j=0;j<n2;j++){
         printf("%d ",arr1[i][j]);
            if(j==n2-1){
            printf("\n");
         }
      }
   }
   int arr2[n1][n2];
   for(i=0; i<n1; i++){
      for(j=0;j<n2;j++){
         printf("Enter value for second array %d %d:",i,j);
         scanf("%d",&arr2[i][j]);
      }
   }
   printf("\nSecond array elements:\n");
   for(i=0; i<n1;i++){
      for(j=0;j<n2;j++){
         printf("%d ",arr2[i][j]);
            if(j==n2-1){
            printf("\n");
         }
      }
   }
   printf("\nTwo Dimensional array Sum:\n");
   for(i=0; i<n1;i++){
      for(j=0;j<n2;j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
         printf("%d ",arr3[i][j]);
            if(j==n2-1){
            printf("\n");
         }
      }
   }
   return 0;
}
