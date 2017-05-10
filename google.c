#include <stdio.h>

int main () 
{
   int y[]={1,2,3,9};
   int x[]={1,2,4,4}; 
   int checkery =0;
   int *p ; 
   int casee =0 ;
   
   while (casee<=1)
  {
   if (casee == 0) 
   p=y ; 
   else
   p=x ;
  for(int i=0 ; i<=3;i++)
   {
   for( int m=i+1 ; m<=3;m++)
     {
   if (*(p + i)+ *(p+m)==8)
       {
       printf ("hey i found lucky matchers %d     %d   thatis in case   %d  \n",*(p + i),*(p+m),casee );
       checkery++;
       }
     }
   }
if (checkery==0)
printf ("hey sry i cannot found any thing in case %d    %d   %d  \n   ",casee,*(p + 2),*(p+3));


   casee++ ; 

 
   } 

  
return 0 ;

}