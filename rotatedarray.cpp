#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int key,int l,int r)
{
	if(l>r)
	return-1;
	
	int mid=l+(r-l)/2;
	
	if(arr[mid]==key)
	return mid;
	
	if(arr[mid]>key)
	
		return binarysearch(arr,key,l,mid-1);
		
	return binarysearch(arr,key,mid-1,r);
	
}
int pivot(int arr[],int l,int r)
{
	if(r<l)
	return -1;
	if(r==l)
	return l;
	
	int mid=l+(r-l)/2;
	
	if(mid< r && arr[mid]>arr[mid+1])
	return mid;
	if(mid>l && arr[mid]<arr[mid-1])
	return mid-1;
	
	if(arr[l]>=arr[mid])
		return pivot(arr,l,mid-1);
				return pivot(arr,mid+1,r);

	
}
int search(int arr[],int key)
{
int n = sizeof(arr) / sizeof(arr[0]);
	int piv=pivot(arr,0,n-1);
	if(piv==-1)
	return binarysearch(arr,key,0,n-1);
if(piv==key)
return piv;

if(arr[0]<=key)return binarysearch(arr,key,0,piv-1);

return binarysearch(arr,key,piv+1,n-1);

}
// Function declarations
int binarysearch(int arr[], int key, int l, int r);
int pivot(int arr[], int l, int r);
int search(int arr[], int key);

// Main function
int main() {
    // Example array (rotated sorted array)
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Key to search
    int key = 6;

    // Call the search function
    int result = search(arr, key);

    // Output the result
    if (result != -1) {
        cout << "Element " << key << " is present at index " << result << "." << endl;
    } else {
        cout << "Element " << key << " is not present in the array." << endl;
    }

    return 0;
}

