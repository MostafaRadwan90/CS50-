// hello my name is mostafa radwan and this is CS50 :))
#include<cs50.h>
#include<stdio.h>
int main (void)
{
    
    
    int i;
    printf ("enter number of high positive and less than 23 \n" );
    int h = GetInt();
    while (h<0 || h>23){ 
       printf("Retry");
         h = GetInt();
}

  // printf("high:   %i\n",h) ;
   
   
for( i=0;i<h;i++)  // to enter new row  (vertical axis loop)

{
    
    int j=0; // to intiate j  from zero each time 
      for(j=0;j<=i;j++)   // to print no of #    (horizontal loop)
     
      {
          
          for(int k=h-i-1;k>0;k--){   //to print no of space
      if(j==0)
                   printf(" ");
 
              
          } 
     if (j==0){
      printf("#");}
      printf("#");
       
       
       }
       
       
       printf("\n");
}
 
    
}