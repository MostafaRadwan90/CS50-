# include <stdio.h>
#include <cs50.h>
 #include <string.h>
 int main () 
 {
    typedef struct kol{
         int age ; 
        string name; 
         
     } kol;
          printf ("give me number of students\n"); 
          int students=GetInt();
     
     kol kol1[students];
     FILE* file = fopen("class.cvs","a") ;
     for (int i=0 ; i<=students ; i++)
     {
     printf ("give me age \n"); 
     kol1[i].age=GetInt() ; 
     printf ("give me name \n");
          kol1[i].name=GetString() ; 
  
  fprintf (file," %d        %s  \n", kol1[i].age, kol1[i].name); 
  
 
}    
   fclose (file);  
     return 0 ;
 }