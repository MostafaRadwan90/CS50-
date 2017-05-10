# include <math.h>
#include <stdio.h>
#include <cs50.h>
int numberarr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void card(int numberarr[]);
int main (void)
{
  printf (" give me your VISA  ")  ; 
  long long score ; 
  scanf("%lld", &score);
   for (int i=0 ; score!=0 ;i++)
{
  numberarr[i]=score%10 ; 
    printf("%d %i\n", numberarr[i],i);
    
  
    score /= 10;
}
 card (numberarr);

}

void card(int numberarr[])
{
    
 if (numberarr[14]==3&& (numberarr[13]==7 || numberarr[13]==4))
 printf("AMEX\n");
else if 
(numberarr[15]==5&& numberarr[14]<=5)
 printf("MASTERCARD\n");
 else if 
 (numberarr[12]==4 || numberarr[15]==4)   // to be modified later 
  printf("VISA\n");
  else 
    printf("INVALID\n");


}
