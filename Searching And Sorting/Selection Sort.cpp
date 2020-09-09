/* Selection sort*/

#include<iostream>
using namespace std;

int selectionsort(int *arr, int n)
{
	
	
	for(int i=0; i<n-1; i++)
	{
		//Minimum
	int min=arr[i], min_index=i;
	for(int j=i+1; j<n; j++)
	{
		if(arr[j]<min)
		{
			min=arr[j];
			min_index=j;
		}
	}
	
	//Swap
	int temp = arr[i];
	arr[i]=min;
	arr[min_index]=temp;
	
}
}

int main()
{
	int a[5]={3,4,2,5,1};
	int size= sizeof(a)/sizeof(int);
	
	selectionsort(a, size);
	for(int i=0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}
}
