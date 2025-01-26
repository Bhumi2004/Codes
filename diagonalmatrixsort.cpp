#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m=5,n=4;
	int arr[n][m]={
	      {3,6, 3, 8 ,2},
          {4 ,1 ,9 ,5 ,9},
          {5 ,7, 2 ,4 ,8},
          {8 ,3 ,1 ,7 ,6}
	              };
	              
	              
	    for(int i=0;i<n-1;i++)
	    {
	    		if(arr[i][0]<arr[i+1][0])
	    		swap(arr[i][0],arr[i+1][0]);
			
		}
		
		for(int j=0;j<m-1;j++)
		{
			if(arr[0][j]<arr[0][j+1])
			{
				swap(arr[0][j],arr[0][j+1]);
			}
		}
		cout << "Modified matrix: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
