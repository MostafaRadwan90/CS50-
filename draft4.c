#include <stdio.h>
#include <cs50.h>
int pr();
int add();
int i,j;

int main()
{
       pr();

    printf("%d\n",add());
    return 0;
}

int add( )
{
    return i+j;
}

int pr()
{
    printf("whatsyourno ");
     i=GetInt();
     j=GetInt();
    return i ;
    return j;
}