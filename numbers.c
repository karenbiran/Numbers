// C program to check whether a number is Palindrome or not.
#include <stdio.h>
/* function to reverse digits of num*/
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
/* Function to check if n is Palindrome*/
int isPalindrome(int n)
{
    int rev_n = reverseDigits(n);
    if (rev_n == n)
        return 1;
    else
        return 0;
}


// C program to check whether a number is ascending or not.
#include<stdio.h>
#define nSize 10 //size of array
int main()
{
    int nArr[nSize]={0};
    int i=0;
    printf("Enter 10 Elements");
    for (i=0; i<10; i++)
        scanf("%d", &nArr[i]);
    for(i=0; i<nSize-1 ; i++) { if(nArr[i]>nArr[i+1]) 
        //if(nArr[i]<nArr[i+1]) to check descending order
        {
            return 0;
            return;
        }
    }
    return 1;
}


// C program to check for perfect number.
#include <stdio.h>
int main(){
int number;
printf("Enter a number: ");
scanf("%d", &number);
int i, rem, sum=0;
for(i=1; i<number; i++)
{
rem=number%i;
if(rem==0)
{
sum=sum+i
}
}
if(sum==number)
return 1
else
return 0
}


// C program to reverse a given number.
#include <stdio.h>
int main()
{
   int n, reverse = 0;
    printf("Enter a number to reverse\n");
   scanf("%d", &n);
    while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
    printf("Reverse of entered number is = %d\n", reverse);
    return 0;
}


// C program to check whether a number is Prime or not.
#include <stdio.h> 
main()
{
   int n, c=2;   
   printf("Enter a number to check if it is prime\n");
   scanf("%d",&n);
 
   for (c=2; c<=n-1; c++)
   {
      if (n%c==0)
      {
         return 0;
     break;
      }
   }
   if (c==n)
      return 1;
       
   return 0;
}