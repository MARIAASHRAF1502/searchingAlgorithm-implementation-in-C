#include<stdio.h>

int binarySearch(int a[],int l,int r,int value)
{
	
	int mid;
	
	if(l <= r )
	{
		mid = (l+r) / 2;
		
		if(value == a[mid])
		{
			return mid;
		}else if(value > a[mid]){
			return binarySearch(a,mid+1,r,value);
		}else
		{
			return binarySearch(a,l,mid-1,value);
		}	
	}
	
	return -1;
	
}

int main()
{
	int a[] = {1,12,15,20,23,45,68,69,78,85,98};
	int size = sizeof(a) / sizeof(a[0]);
	int value = 9;
	int result = binarySearch(a,0,size-1,value);
	int i;
	for(i=0;i<size;i++)
	{
		printf("\n %d = %d",i,a[i]);
	}
	if(result == -1)
	{
		printf("\nElement %d is not found!",value);
	}else
	{
		printf("\nElement %d is found at index %d and array position is %d",value,result,result+1);
	}
	
	return 0;
	
}
