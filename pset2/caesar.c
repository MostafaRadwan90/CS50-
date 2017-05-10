# include <stdio.h>
# include <cs50.h>
# include <string.h>
 
 int main (int argc, string argv[] ) 
 
 {
           int n= argc ; 
           if (n!=2)
           {    
               printf("write an integer as encryption key.\n");

               return 1 ;
               
           }
           
           
  else {
          
          int k= atoi(argv[1]);
          
         // printf("Kindly give me words you need to encyrept:   ");
          
          string s =GetString();
             int l = strlen (s) ;
        
            for (int i=0 ; i<l ; i++)
                {
   
                   if ( (int)s[i] >=65 &&(int)s[i] <=90 )     // capital letters 
                   {
                       int var1 =((s[i]-65 )+k)%26 +65 ; 
                      printf ("%c",(char) var1);
      
          
                    }
                  else if ( (int)s[i] >=97 &&(int)s[i] <=122 )
                    {
                 int var2 =((s[i]-97 )+k)%26 +97 ; 
              printf ("%c",(char)var2);

                    }
                    
                    else 
                    {
                        printf("%c",s[i]);
                        
                    }
    
                 }
          
           }
           printf("\n");
    return 0;  
 }