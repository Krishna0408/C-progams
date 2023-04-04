#include<stdio.h>
int main()
{
    int mom,dad,sis,bro;
    printf("Enter the Four family members Age :");
    scanf("%d %d %d %d",&mom,&dad,&sis,&bro);
    if(mom>dad)
    {
        if(mom>sis)
        {
            if(mom>bro)
            {
                printf("mom is highest among all of them with age of %d ",mom);
            }
            else
            {
                printf("bro is highest among all of them with age of %d",bro);
            }
        }
    }
    else if(dad>sis)
        {
            if(dad>bro)
                {
                    printf("dad is highest among all of them with age of %d",dad);
                }
            else
                {
                    printf("bro is highest among all of them with age of %d",bro);
                }
        }
        else if(sis>bro)
            {
               printf("sis is highest among all of them with age of %d",sis);
            }
        else
        {
            printf("bro is highest among all of them with age of %d",bro);
        }
    getch();
}
