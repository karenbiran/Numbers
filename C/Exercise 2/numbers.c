#include <math.h> 
#include <stdio.h>
int reverse(int n);
int isPalindrome(int n);
int isAscending(int n);
int isPrime(int n);
//void printPerfect(int n);

int main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d",&num);
	printf("The reverse of %d is %d ", num, reverse(num));
	if (isPalindrome(num)  == 1)
	{
		printf("The number %d is a palindrome", num);
	}
	else
	{
		printf("The number %d is not a palindrome", num);
	}
	if (isAscending(num)  == 1)
	{
		printf("The number %d is ascending", num);
	}
	else
	{
		printf("The number %d is not ascending", num);
	}
	if (isPrime(num)  == 1)
	{
		printf("The number %d is prime", num);
	}
	else
	{
		printf("The number %d is not prime", num);
	}

	//isPrime(num);
	//printPerfect(num);
	return 0;
}


int reverse(int n)
{
	int remainder, reversedInt = 0;
	while (n != 0)
	{
		remainder = n%10;
		reversedInt = reversedInt*10 + remainder;
		n = n/10;
	}
	return reversedInt;
}

int isPalindrome(int n)
{
	if (reverse(n) == n)
	{
		return 1;
	}
	return 0;
}

int isAscending(int n)
{
	int digit=10, prevDigit;
	while (n > 0)
	{
		prevDigit = digit;
		digit = n%10;
		n = n/10;
		if (prevDigit<digit)
		{
			return 0;
		}
		
	}
	return 1;
}

int isPrime(int n)
{
	int ii;
	int sqr = sqrt(n);
	for (ii = 2; ii < sqr; ++ii)
	{
		if (n%ii == 0)
		{
			return 0;
		}
	}
	return 1;
}
