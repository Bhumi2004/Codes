#include<bits/stdc++.h>
using namespace std;
void rgroup(vector<int> &arr , int k)
{
	int n=arr.size();
	for(int i=0;i<n;i+=k)
	{
		int left=i;
		int right=min(i+k-1,n-1);
		while(left<right)
		{
			swap(arr[left],arr[right]);
			left++;
			right--;
		}
	}
}
int main()
{
	vector<int> arr;
	arr.push_back(1);
		arr.push_back(2);	arr.push_back(3);	arr.push_back(4);
		int target=3;
		rgroup(arr,target);
		for(int i=0;i<arr.size();i++)
		{
			cout<< arr[i]<<" ";
		}
	return 0;
		
}
