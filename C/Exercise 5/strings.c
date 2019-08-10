#include <stdio.h>
#include <string.h>

void Int2Bin(int n, char* binary);
int Bin2Int(char* binary);
void squeeze(char *s1, char *s2);
//int location(s1, s2);

void Int2Bin(int n, char* binary)
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

int Bin2Int(char* binary)
{
	int ii, result = 0, len= strlen(binary), valueOfDigit = 1;
	for (ii = len-1; ii >= 0; ii--, valueOfDigit = valueOfDigit*2)
	{
		if (binary[ii] == '1')
		{
			result = result + valueOfDigit;
		}
	}
	return result;
}

void squeeze(char *s1, char *s2)
{
	int from, to, remIx, remLen = strlen(s2), txtLen = strlen(s1);
	char chToRemove;
	for(remIx = 0; remIx < remLen; ++remIx)
	{
        printf("Inside squeeze 3\n");
		chToRemove = s2[remIx];    
		for(from = 0, to = 0; from < txtLen; ++from)
    		{
			if (s1[from] != chToRemove)
			{
				s1[to] = s1[from];
				++to;
			}
		}
		txtLen = to;
		s1[to] = '\0';
		printf("%s", s1);
	}

}


int main()
{
	int num;
	char binary[32], s1[30], s2[10];
/*	
	printf("Please enter a number: ");
	scanf("%d",&num);
	Int2Bin(num, binary);
	printf(binary);
	printf("Please enter a binary string: ");
	scanf("%s", binary);
	printf("The value is %d ", Bin2Int(binary));
*/
	printf("Please enter s1: ");
	scanf("%s", s1);
	printf("Please enter s2: ");
	scanf("%s", s2);
	squeeze(s1, s2);
	printf("The result is %s", s1);
	return 0;
}



int location(s1, s2)
{


}
