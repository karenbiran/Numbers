#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bitsBitwise.h"

static void int2Bin(int n, char* binary)
{
	int ii, digit, currentLocation = 30;
	for (ii = 0; ii < 31; ++ii)
	{
		binary[ii] = '0';
	}
	binary[31] = '\0';
	while (n > 0)
	{
		digit = n%2;
		if (digit == 0)
		{
			binary[currentLocation] = '0';
		}
		else
		{
			binary[currentLocation] = '1';
		}
		n = n/2;
		--currentLocation;
	}
}

bitMap_t *createBitMap(int nf)
{
	bitMap_t *bm = malloc(sizeof(bitMap_t)); //allocate storage with the size of bitMap_t//
	int size;
	if(bm == NULL)
	{
		return NULL;
	}
	size = (nf - 1) / 32 + 1;
	bm->m_bitArr=calloc(size,sizeof(unsigned int));
	if (bm -> m_bitArr == NULL)
	{
		free(bm);
		return NULL;
	}
	bm -> m_nf = nf;
	return bm;
}

int bitOn(bitMap_t *bm, int n)
{
	unsigned int num = 1;
	int indexNum, indexBinary;
	if(n>(bm -> m_nf)) //max number of features
	{
		return -1;
	}
	indexNum = (n-1)/32;
	indexBinary = (n - 1) % 32;
	num=num<<(indexBinary);
	bm -> m_bitArr[indexNum] = bm -> m_bitArr[indexNum] | num; //bitwise or
	return 0;
}

int bitOff(bitMap_t*bm,int n)
{
	unsigned int num = 1;
	int indexNum,indexBinary;
	if(n>(bm->m_nf)) //max number of features
	{
		return -1;
	}
	indexNum = (n-1)/32;
	indexBinary = (n - 1) % 32;
	num=num<<(indexBinary);
	num = ~num; //reverse the value of each bit
	bm -> m_bitArr[indexNum] = bm -> m_bitArr[indexNum] & num; //bitwise and
	return 0;
}

int bitStatus(bitMap_t*bm,int n)
{
	unsigned int num = 1;
	int indexNum,indexBinary;
	if(n>(bm->m_nf)) //max number of features
	{
		return -1;
	}
	indexNum = (n-1)/32;
	indexBinary = (n - 1) % 32;
	num=num<<(indexBinary);
	num = bm -> m_bitArr[indexNum] & num;
	return (num == 0)?0:1;
}
