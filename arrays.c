#include <stdio.h>
int main()
{
	int a[100],n,i,j;
	printf("Array size: ");
        scanf("%d",&n);
	printf("Elements: ");
        
	for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[i])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}  
		}
	}



#include <stdio.h>
int main()
{
i=0
j=n-1
	while(i<j)
	{
		for ( ; i < j && num[i] = 0; ++i) { }
		for ( ; j > i && num[j] = 1; --j) { }
	}
}




#include<stdio.h>
int main()
{
	int i,j,k;
    
	int NUM[10] = {1,2,3,4,5,6,7,8,9,10};
    
	int ODD[10];
	int EVEN[10];
    
	j = 0;
	k = 0;
 	for(i = 0; i<10 ; i++){
        
	if(NUM[i]%2 == 0){
            EVEN[j] = NUM[i];
            j++;
	}else{
            ODD[k] = NUM[i];
            k++;
        }
	}
    
	printf("Even numbers : ");
	for(i = 0;i<j; i++){
        printf("%d ",EVEN[i]);
	}
	printf("\nOdd numbers : ");
	for(i = 0;i<k; i++){
 	printf("%d ",ODD[i]);
	}
	printf("\n");
}


#include <stdio.h>
int main()
{
	int max_occuring_value(int* arr,int size)
		{ int i=0,j=0,max_count=0,max_num=0,dig=0,count=0;
		for(i=0;i<size;i++)
		{ count=0;
        	dig=arr[i];
		for(j=0;j<size;j++)
		{ if(dig==arr[j]);
			
		{
		count++;	
		}
	 	}
 	 	if(count>max_count)
		{
		max_count=count;
		max_num=arr[i];
	
	}	
        }
return max_num;
}
