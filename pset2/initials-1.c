#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv[])


{
   int n = argc ;
   for (int i=0 ; i<n ; i++)
   {
   
        if ( (int)argv[i][0] >=65 &&(int)argv[i][0] <=90 )
       {
      printf ("%c",argv[i][0]);
      
          
        }
          else if ( (int)argv[i][0] >=97 &&(int)argv[i][0] <=122 )
        {
        
              printf ("%c",(char)( (int)argv[i][0] -32));

        }
    
   }
    
}