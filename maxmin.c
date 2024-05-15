#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int arr[MAX_SIZE];
	int i,max,min,size;
	printf("\n enter the size of array :");
	scanf("%d",&size);
	printf("\n enter element in the array :");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	printf("\n maximum element =%d",max);
	printf("\n minimum element =%d",min);
	
	return 0;
}
