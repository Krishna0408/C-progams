#include<stdio.h>

int main()
{
   int arr1[10],arr2[10],n,pos,i;

   printf("Enter the limit:");
   scanf("%d", &n);

   printf("Enter %d elements\n",n);

   for (i=0;i<n;i++)
      scanf("%d", &arr1[i]);

   printf("Enter the delete location\n");
   scanf("%d", &pos);

   if (pos>=n+1)
      printf("Deletion not possible!\n");
   else
   {
      for (i=pos;i<n-1; i++)
        {
        arr1[i] = arr1[i+1];

   }
 printf("result:");
    for(i=0;i<n-1;i++)
    {
      arr2[i]=arr1[i];
    printf("\n%d",arr2[i]);
    }


}
   return 0;
}
