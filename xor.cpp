#include<iostream>
using namespace std;
int find(int arr[], int size)
{
	int res=arr[0];
	for(int i=1;i<size;i++)
		res=res^arr[i];
	
	return res;
}
int main()
{
	int arr[]={7,3,5,4,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
cout<<	find(arr,n);
return  0;
	
}
