#ifndef bitwise
#define bitwise

typedef struct
{
  unsigned int *m_bitArr;
  int m_nf;
}
bitMap_t;

typedef int (*bitFunc)(bitMap_t*bm,int n) ;


bitMap_t* createBitMap(int nf);
int bitOn(bitMap_t*bm,int n); 
int bitStatus(bitMap_t*bm,int n); 
int bitOff(bitMap_t*bm,int n);


#endif
