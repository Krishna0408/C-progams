# include<stdio.h>
int main()
{
    int n1,n2,ret1,ret2;
    printf("Enter 2 numbers :");
    scanf("%d%d",&n1,&n2);

    ret1=((n1>n2)||(n1!= n2 ));

    if(ret1==1){
        printf("\nCondtiton 1 is True");
    }else{
    printf("\nCondtiton 1 is False");
    }
    ret2=((n1==n2)&&(n1<=n2 ));

    if(ret2==1){
        printf("\nCondtiton 2 is True");
    }else{
    printf("\nCondtiton 2 is False\n");
    }
    return 0;
}
