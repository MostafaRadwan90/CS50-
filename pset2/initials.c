#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
int i =0;

    string s = GetString() ; 
   int n = strlen (s) ;
  
        do 
         {
             
             if ( (int)s[i] >=65 &&(int)s[i] <=90 && ((int) s[i-1]==32 ||i==0) )   // to premit first letter and letter after spaces only ...Checking case by ASCII 
           {
      printf ("%c",s[i]);
      
          
           }
          else if ( (int)s[i]>=97 &&(int)s[i] <=122 && ((int) s[i-1]==32 ||i==0))  
          
           {
        
              printf ("%c",(char)( (int)s[i] -32));            // to make it capital 
 

           }
            i++;
         }    
             while (  i<n );
   
  printf ("\n");
        
}