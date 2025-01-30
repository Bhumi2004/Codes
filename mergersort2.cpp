#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr ,int l,int m,int r);
//int mergesort(vector<int>&arr ,int l,int r);

void mergesort(vector<int>&arr ,int l,int r)
{
	if(l>=r)
{
		return; }
	
	
	
		int m =l+(r-l)/2;
		
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
			
}
void merge(vector<int> &arr ,int l, int m,int r)
{
	int i,j,k;
	int n1=m-l+1,n2=r-m;
	vector<int>L(n1), R(n2);
	
	for(i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[m+1+j];
	}
	
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		arr[k]=L[i];
			i++;
			k++;
		
	}
	
		while(j<n2)
	{
		arr[k]=R[j];
			j++;
			k++;
		}
		
	
}



int main() {
vector<int> arr;
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(9);
    arr.push_back(7);    int n = arr.size();
    int l = 0, r = n - 1;

    mergesort(arr, l, r);

    cout << "Sorted array: ";
    for (int num=0; num<n;num++) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}








