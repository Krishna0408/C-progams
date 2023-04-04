# include<stdio.h>
int main()
{
    int n1,n2,ret1,ret2;
    printf("Enter 2 numbers :");
    scanf("%d%d",&n1,&n2);

    ret1=((n1>n2)||(n1!= n2 ));
    printf("\n%d\n",ret1);
    ret2=((n1==n2)&&(n1<=n2 ));
    printf("%d\n",ret2);

    printf("\n%d\n%d",!ret1,!ret2);
    return 0;
}
