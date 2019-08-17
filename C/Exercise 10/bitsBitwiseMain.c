#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bitsBitwise.h"


int main()
{
     unsigned int nf, n;
     bitMap_t*bm;
     bitFunc bf[3] = {bitOn, bitOff, bitStatus};
     printf("Please enter numbers of bits \n");
     scanf("%u", &nf); //unsigned integer
     bm = createBitMap(nf);
     do
     {
       printf("enter the bit you want \n");
       scanf("%u",&n);
       printf("press 0 for bitOn \n");
       printf("press 1 for bitOff \n");
       printf("press 2 for bitStatus \n");
       printf("press -1 for exit \n");   
      }
}
