#include <stdio.h>
#include<string.h>
#include <math.h>
#include<stdlib.h>
#include"Bitwise.h"

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

int inverts(unsigned char* c)
{
   unsigned int num;
   unsigned char temp=0;
   
   if(c!=NULL)
   {    
      temp=~temp;
      *c=*c^temp;
     
        num=(unsigned int)(*c);
        int2Bin(num);
    
     return 1;
   }
  return 0;
}

char RotateByNum(char c,int n)
{
    int i;
    unsigned int num;
    char temp=c;
    temp=temp<<(sizeof(char)-n);
    c=c>>n;
    c=c|temp;
    num=c;
    int2Bin(num);
    return c;  
}

int setBits(unsigned char* x,int p,int n,unsigned char* y)
{
   unsigned int num;
   unsigned char temp=pow(2,n)-1;
    if((x!=NULL)&&(y!=NULL))
    {
       
      temp=temp<<(p-n);
      temp=~temp;
      *x=*x&temp;
      *y=*y<<(8-n);
      *y=*y>>(8-p);
      *x=*y|*x;
     
        num=(unsigned int)(*x);
        int2Bin(num);
    
     return 1;
   }
  return 0; 
}

int setBits2(unsigned char* x,int i,int j,int value)
{
   unsigned int num;
   unsigned char temp=pow(2,j-i+1)-1;
    if(x!=NULL)
    {
       temp=temp<<(i-1);
       if(value==1){
          *x=*x|temp;
       }else
       {
          temp=~temp;
          *x=*x&temp;
       }
       num=(unsigned int)(*x);
        int2Bin(num);
        return 1;
    }
   return 0;
}

