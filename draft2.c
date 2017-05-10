#include <cs50.h>
#include <stdio.h>

int main (void)

{
    
    printf("O hai! How much change is owed?\n");
   float a =GetFloat();// user value
  int b=(int)(a*100); 
  //  printf ("%0.2f %",a,b);              // user value to make operation on it    
    int y=0 ;
    
    if (b>0)  {
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
        printf("%d  \n" ,y);
}
}
    