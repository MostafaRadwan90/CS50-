// hello my name is mostafa radwan and this is CS50 :))

#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main (void)

{
    
    printf("O hai! How much change is owed?\n");
   float a =GetFloat();// user value
  int b=round(a*100); 
    int y=0 ;  //  counter
    
    if (b>0)    // accepts positve values
    {
    while (b>0)            
    {
                       // quarters checkers
        if (b>=25)
        {
    b=b-25 ;
    y++;  //   printf("%i %i\n" ,y,b);
}
    
    else if  (25>b && b>=10)
        {
    b=b-10 ;
    y++ ; // printf("%i %f\n" ,y,b);
     }
    
    else if(10>b && b>=5){
    b=b-5;
    y++;
   // printf(" check %i \n",y);
  }
   
    else if  (5>b && b>=1){
    b=b-1;
   y++;
        
    }

    }
        printf("%d\n" ,y);
}
else {
    printf ("retry");
       a =GetFloat();// user value
       b=round(a*100); 
}
}
    