#include<iostream>
using namespace std;


void selectionsort(int arr[],int n)
{
	int i,j;
	int min_index;
	for( i=0;i<n-1;i++)
	{
		
		min_index=i;
		for(j=i+1;j<n;j++)
		
			if(arr[j]<arr[min_index])
			min_index=j;
			
		  if(min_index!=i)
		swap(arr[min_index],arr[i]);
		i++;
		
		
	}
	
	
}
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
int main()
{
	int arr[]={64,25,12,22,11};
	int n= sizeof(arr)/sizeof(arr[0]);
	 selectionsort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
	
	
} 
