#include<bits/stdc++.h>
using namespace std;

int frequency(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		bool counted=false;
		for(int j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				counted=true;
				break;
			}
			
			
		}
		
		
		if(!counted)
		{
			int count=0;
			for(int j=0;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					count++;
				}
				
			}
			cout<<"element"<<arr[i]<<"frequency="<<count<<endl;
		}
	}
}
int main()
{
	int arr[]={1,1,2,2,3,3,3};
		int n=sizeof(arr)/sizeof(arr[0]);

	frequency(arr,n);
	return 0;
	
}
