# include <stdio.h>
# include <cs50.h>
# include <string.h>
#include <ctype.h> 
 
 int main (int argc, string argv[] ) 
 
 {
  
   int n= argc ; 
   string keyword =argv[1];   // keyword  
   int k =strlen (keyword); 
   int shiftvalue[k-1];               // to store crossponding shift value for each letter 
   for (int j=0 ; j<k;j++)
   { 
       if (n!=2 || !isalpha(keyword[j]))
       {    
       printf("write an word as encryption key.\n");
       return 1 ;
       }
   }
   for (int j1=0; j1<k;j1++)
   {
    if ( (int)keyword[j1] >=65 &&(int)keyword[j1] <=90 )     // capital letters 
      {
                        shiftvalue[j1] =(keyword[j1]-65 );
      }
    else if ( (int)keyword[j1] >=97 &&(int)keyword[j1] <=122 )         
      {
                            shiftvalue[j1] =(keyword[j1]-97 );
      }   
         }      
  printf ("Give me massage to encyrebt :   ");   // ask for plain text   
  string massage = GetString();
  int m = strlen(massage);
   for (int i=0 ; i<m; i++)
                {
   
                   if ( (int)massage[i] >=65 &&(int)massage[i] <=90 )     // capital letters 
                   { 
                      printf ("%c",massage[i]);
                   }
  
 }    
 } 
  
