#include<bits/stdc++.h>
using namespace std;
void deletemid(stack<int>&s)
{
	int n=s.size();
	stack<int>temp;
	int count=0;
	
	while(count<n/2)
	{
		int p=s.top();
		s.pop();
				temp.push(p);

		count++;
	}
	s.pop();
	
	while(!temp.empty())
	{
		s.push(temp.top());
		temp.pop();
	}
}
int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	deletemid(s);
	while(!s.empty())
	{
		  int p = s.top();
        s.pop();
        cout << p << " ";
	}
	return 0;
	
}
