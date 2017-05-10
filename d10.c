#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


int main ()

{

  char word [10]={'t'}; 
  
    for (int i=1 ; i<10 ;i++) 
{
  scanf ("%c" ,&word[i]); 
  
}
  


char* wword[10];
wword[0]=&word[0];

wword[0] =  (char*)malloc (sizeof(word)); 
for (int i=1 ; i<10 ;i++) 
{
strcat(wword[0],&word[i]);
  
}

printf ("\t \t %c    %s  \n",word[0],wword[0]); 
free (wword[0]);
return 0 ;
}
  