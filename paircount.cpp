#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={-1,1,5,5,7};
	int target =6;
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0,complement;
	 unordered_map<int, int> freq_map;
	 
	for(int i=0;i<n;i++)
	{
		complement=target-arr[i];
		if(freq_map.find(complement)!=freq_map.end())
		{
		count+=freq_map[complement];
	}
	freq_map[arr[i]]++;
	
	}
	cout<<count;
	return 0;
	
	
}
