#include<stdio.h>

int main()
{
   int arr1[10],arr2[10],n,pos,i,ele;

   printf("Enter the limit:");
   scanf("%d", &n);

   printf("Enter %d elements\n",n);

   for (i=0;i<n;i++)
      scanf("%d", &arr1[i]);

   printf("Enter the insert location\n");
   scanf("%d", &pos);
// inserting elements into the array

   if (pos>=n+1)
   {
      printf("insert not possible!\n");
    }


   else
   {
      printf("Enter the elements:\n");
   scanf("%d",&ele);
      for (i=n-1;i>=pos-1; i--)
        {
        arr1[i+1] = arr1[i];


   }
   arr1[pos-1]=ele;

   printf("result:");

    for(i=0;i<=n;i++)
    {
      arr2[i]=arr1[i];
    printf("%d\t",arr2[i]);
    }


}
   return 0;
}
