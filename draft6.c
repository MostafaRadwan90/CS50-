#include<stdio.h>
#include<math.h>
#include<string.h>
#include<cs50.h>
#include<time.h>
double mult(int,int);
    int mod (double);
    double v =0;
    int m,x,y ;
int main ()  
{ 
    printf ("give me your numbers "); 
   x=GetInt(); 
    y=GetInt(); 
    
    v=mult(x,y) ;
   m=mod(v) ; 
    
    printf ("%d     %f   %li    \n",m,v,(long int)time(NULL)); 
    return 0;
}

   double mult()
{
    v = (x+0.6)*(y+0.9) ;
    return v ;
}
    
    int mod ()
    {
      int  h=round(v);
        m=h%5 ; 
        return m ; 
    }