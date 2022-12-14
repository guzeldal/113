#include <stdio.h>

int main()
{
    int a,b;
    for(b=0;b<5;b++)
    {
        if(b!=2)
        {
            for(a=0;a<5;a++)
            { if(a==2)
                printf(" ");
            else
                printf("*");
            }
            printf("\n");
        }
        else
            printf("*****\n");
    }
    return 0;
}

