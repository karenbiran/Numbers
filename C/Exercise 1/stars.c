#include <stdio.h>
void printDoubleTriangle(int n);
void printTriangle(int n);
void printPyramid(int n);
int main()
{
	int num;
	printf("Please enter number of lines: ");
	scanf("%d",&num);
	printTriangle(num);
	printDoubleTriangle(num);
	printPyramid(num);
	return 0;
}


void printTriangle(int n)
{
	int line, col;
	for (line = 1; line <= n; ++line)
	{
		for (col = 0; col < line; ++col)
		{
			printf("*");
		}
		printf("\n");
	}
}

void printDoubleTriangle(int n)
{
	int line, col;
	printTriangle(n);
	for (line = n-1; line >= 1; --line)
	{
		for (col = 0; col < line; ++col)
		{
			printf("*");
		}
		printf("\n");
	}
}

void printPyramid(int n)
{
	int line, cntStar, cntBlank, col;
	for (line = 1, cntBlank = n-1, cntStar = 1; line <=n; ++line, --cntBlank, cntStar +=2)
	{
		for (col = 0; col < cntBlank; ++col)
		{
			printf(" ");
		}
		
		for (col = 0; col < cntStar; ++col)
		{
			printf("*");
		}
		printf("\n");
	}
}
