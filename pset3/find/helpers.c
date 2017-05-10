/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
  int i; // TODO: implement a searching algorithm
    for ( i=0 ; i<n &&value!=values[i] ; i++){
}
if (i==n &&value!=values[i] ) 
return false ; 
else 
return true ;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
  int i,j,min;
    // TODO: implement an O(n^2) sorting algorithm
    for (i=0 ; i<n ; i++)
    {
      for (j=i+1 ; j<n ; j++)
      {
      if (values[i] > values [j])
       {
        min = values[j] ; 
        values[j]=values[i] ; 
        values[i]=min ; 
       }
       
      }
    }
  /* int c ; 
  for (c=0 ; c<n ; c++)
    printf (" %i  \n ",values[c] ) ;  */ 
    return;
}