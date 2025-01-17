#include<bits/stdc++.h>
using namespace std;
int me
dian(int arr3[], int l, int r);
int main()
{
	int arr[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	int arr3[10];
	int n=sizeof(arr)/sizeof(arr[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	for(int i=0;i<n;i++)
	{
		arr3[i]=arr[i];
	}
	for(int j=0;j<m;j++)
		{
					arr3[n+j]=arr2[j];

		}
		for(int i=0;i<10;i++)
		{
			cout<<arr3[i]<" ";
		}
		
		median(arr3,0,9);
	
	return 0;
}
int median(int arr3[],int l,int r)
{
	int mid =l+(r-l)/2;
	int mid2= mid+1;
	int avg=(arr3[mid]+arr3[mid2])/2;
	cout<<"median"<<avg;
	
	
}


