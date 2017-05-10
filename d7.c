# include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>

int main () 
{
    printf ("hello give me numbers") ; 
    
    int x=0 ;
    int y=0 ; 
    x = GetInt() ;
       y = GetInt() ;
   printf (" %i       %i \n",x,y)  ;

   x=x^y ;
   y=x^y;
   x=x^y;
    printf (" %i       %i\n",x,y)  ;


    return 0 ;
    
    
    
    
    
}