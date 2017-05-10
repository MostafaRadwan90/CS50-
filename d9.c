#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <sys/resource.h>
#undef calculate
#undef getrusage
double calculate(const struct rusage* b, const struct rusage* a);
bool load(const char* dictionary);

#define LENGTH 45


int main (int argc, char* argv[])

{

 struct rusage before, after;

    double time_toread = 0.0;
    
//   argv[1] like example.txt  
  char*  dictionary=argv[1] ;

/* FILE *f = fopen(dictionary, "r");

if (f==NULL)
{
printf(" mistake happen cannot read") ;
return 1;
 } */
 
    getrusage(RUSAGE_SELF, &before);
    
      load(dictionary);
/*int c;
while((c = fgetc(f)) != EOF)
{
    printf("%c",c);
}
fclose (f); */
    getrusage(RUSAGE_SELF, &after);
        time_toread = calculate(&before, &after);
        


    printf("TIME IN load:         %.2f\n", time_toread);



return 0;
}

double calculate(const struct rusage* b, const struct rusage* a)
{
    if (b == NULL || a == NULL)
    {
        return 0.0;
    }
    else
    {
        return ((((a->ru_utime.tv_sec * 1000000 + a->ru_utime.tv_usec) -
                 (b->ru_utime.tv_sec * 1000000 + b->ru_utime.tv_usec)) +
                ((a->ru_stime.tv_sec * 1000000 + a->ru_stime.tv_usec) -
                 (b->ru_stime.tv_sec * 1000000 + b->ru_stime.tv_usec)))
                / 1000000.0);
    }
}

bool load(const char* dictionary)
{
    // TODO
    int index = 0,words = 0;
    int lastl=0,midl=0;
    char word[LENGTH+1];
     char * wword[1001] ;


    FILE* dic = fopen(dictionary, "r");
    if (dic == NULL)
    {
        printf("Could not open %s.\n", dictionary);
        return false;
    }
    
    for (int c = fgetc(dic); c != EOF; c = fgetc(dic))
    {

        // allow only alphabetical characters and apostrophes
        if (isalpha(c) || (c == '\'' && index > 0))
        {
            // append character to word
            word[index] = c;
            index++;

            // ignore alphabetical strings too long to be words
            if (index > LENGTH)
            {
                // consume remainder of alphabetical string
                while ((c = fgetc(dic)) != EOF && isalpha(c));

                // prepare for new word
                index = 0;
            }
        }

        // ignore words with numbers (like MS Word can)
        else if (isdigit(c))
        {
            // consume remainder of alphanumeric string
            while ((c = fgetc(dic)) != EOF && isalnum(c));

            // prepare for new word
            index = 0;
        }

        // we must have found a whole word
        else if (index > 0)
        {
            // terminate current word
            word[index] = '\0';
            lastl= index-1 ;
            midl= (index -1)%3 ;
            words++;
            index = 0;
           
            int hashi= (word[0]*word[lastl])*(word[midl]+3)%1000;
            
            if (wword[hashi]==NULL){
            wword[hashi]=(char* )malloc(sizeof(char)*(lastl+2));
            strcpy (wword[hashi],&word[0]);
            printf ("hash of word %d  = %d   %c   %c    intial wword[hashi] =%s \n",words,hashi,word[0],word[lastl],wword[hashi]);
            
            }
            else {
               // printf ("error duplictae hashi \n");
            }
      
        }

    }
    fclose(dic);
    return true;
    free(wword);

}