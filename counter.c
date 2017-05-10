#include <stdio.h>

int main ()

{
int n =5 ;// or you can promote user for any number you like 
int j=0 ; // j hoizontal iteration 
int m=n;
for (int i=1 ; i<2*n ; i++)
{

if (i<=n)
{
for (j=0 ; j<i && j<=n ; j++)
{
printf ("%i ",j+1);
}
printf ("\n"); 
}
else{
    
  for (j=0 ; j<2*i && j<m-1 ; j++)
{
printf ("%i ",j+1);

}
printf ("\n"); 
m=m-1;

}  
    
}




return 0 ;

}