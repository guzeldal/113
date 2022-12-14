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




#include <stdio.h>
void printPant(void);

int main()
{
    printPant();
}


void printPant(void)
{
    int a,b;
    
    for(b=0;b<5;b++)
    {
        if(b<3)
        {
            for(a=0;a<5;a++)
                printf("*");
        }
        else
        {

            for(a=0;a<5;a++)
            {
                if(a==2)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <math.h>
void printPant(void);

int main ()

{

int i,j,k,r=10,x=10,y=10,d,a,l;

for(i=0;i<24;i++)

{

for(j=0;j<25;j++)

{ a=((i-x)*(i-x))+((j-y)*(j-y));

 d=sqrt(a);

 if(r==d)
{

printf("*");

}

else

printf(" ");

}

printf("\n");

}
    printPant();
    
return 0;

}

void printPant(void)
{
    int a,b;
    
    for(b=0;b<5;b++)
    {
        if(b<3)
        {
            for(a=0;a<5;a++)
                printf("*");
        }
        else
        {

            for(a=0;a<5;a++)
            {
                if(a==2)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
}

void funcChar(char ch);
void funcCol(int a,char ch);


int main()
{
	int a;
	char userinput1;
   scanf("%c%5",&userinput1,&a);
   funcCol(a,userinput1);
}


void funcChar(char ch)
{
	printf("%c",ch);
}

void funcCol(int a,char ch)
{
	int counter;
	for(counter=0;counter<a;counter++)
		funcChar(ch);			
}

