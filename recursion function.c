#include <stdio.h>
fun(n)
{
    if(n==1)
    {
    return 1;
    }
    else{
    return 1+fun(n-1);
    }
}

int main() {
    int n=5;
    printf("%d",fun(n));
    return 0;
}
