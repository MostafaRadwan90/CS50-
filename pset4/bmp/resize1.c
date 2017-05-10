/**
 * copy.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        printf("Usage: ./copy infile outfile\n");
        return 1;
    }

   // save and check resizzing value 
    int n =atoi(argv[1]);

   if (n<=0 || n>100)
    {
        printf ("please enter correct value for resize \n") ;
    
        return 5 ; 
    }
        // remember filenames

    char* infile = argv[2];
    char* outfile = argv[3];

    // open input file 
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE* outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }
  //   printf (" %d   %d   %d  \n ",bf.bfOffBits,bi.biSize,bi.biSizeImage);   

    int owidth = abs(bi.biWidth) ;
    int oheight = abs(bi.biHeight) ; 
    
     bi.biWidth=bi.biWidth*n ;
     bi.biHeight=bi.biHeight*n ;
     // determine padding for scanlines
      int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
      int opadding =  (4 - (owidth * sizeof(RGBTRIPLE)) % 4) % 4;

      bi.biSizeImage= (bi.biWidth*sizeof(RGBTRIPLE)+padding)*abs(bi.biHeight);
                                    //bf.bfSize=bi.biSize+sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER);
                                    // bf.bfSize=(bi.biSize)+sizeof(bf)+sizeof(bi);

      bf.bfOffBits=sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER);
      bf.bfSize=(bi.biSize)+(bf.bfOffBits);
  //  printf (" %u      %d       %lu     %lu  \n ",(bf.bfSize),bi.biSize,sizeof(bf),sizeof(bi) );
    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // initals place for padding

    // iterate over infile's scanlines
    for (int i = 0 ; i < oheight; i++)
    {
        // iterate over pixels in scanline
        
        for(int yy=0 ; yy<n ; yy++) 
        {    
             for (int j = 0; j < owidth; j++)
           {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);
           for(int pp=0 ; pp<n ; pp++) 
             {
            // write RGB triple to outfile
            fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
              }
            
             }
        
        // skip over padding, if any
        fseek(inptr, opadding, SEEK_CUR);

        // then add it back (to demonstrate how)
        for (int k = 0; k < padding; k++)
        {
            fputc(0x00, outptr);
        }
                    fseek(inptr, -(bi.biWidth * 3 + opadding ), SEEK_CUR);

            
        }
                       fseek(inptr, (bi.biWidth * 3 + opadding ), SEEK_CUR);
 
            
        }
    

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // that's all folks
    return 0;
}
