#include <stdio.h>
#include <stdlib.h>

void func(char **p);
void clearMem(int cap, char **ptr, int *size);

int main()
{
	char *ptr[10];
	int size[10];
	int cap = 10, ii, amt;
	time_t t;
	srand((unsigned) time(&t));
	for (ii = 0; i < cap; ++ii)
	{
		amt = rand()%100 + 101;
		ptr[ii] = malloc(amt);
		size[ii] = amt;
	}
clearMem(cap, ptr, size);
{
	int itemIx, byteIx, s;
	char *p;
	for (itemIx = 0; itemIx < cap; ++itemIx)
	{
		p = ptr[itemIx];
		s = size[itemIx];
		for (byteIx = 0; byteIx < size; ++byteIx)
		{
			P[byteIx] = '\0';
		}
	}
}
}
