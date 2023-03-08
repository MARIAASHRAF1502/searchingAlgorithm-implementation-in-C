#include<stdio.h>

int main()
{
	int a[] = {10,45,7,85,6,14,2,5,8,9,48};
	int size = sizeof(a) / sizeof(a[0]);
	int i;
	int num = 4,count = 0;
	
	for(i=0;i<size;i++)
	{
	 if(a[i] == num)
	 {
	 	printf("Element %d at index : %d",num,i);	
	 	break;
	 }
	 else{
	 	count += 1;
	 }
	 if(count >=size)
	 {
	 	printf("No element found %d",count);
	 }
	}
}
