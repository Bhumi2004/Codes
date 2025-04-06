#include<bits/stdc++.h>
using namespace std;

void reverse(stack<int> s)
{
	while (!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
        if (!s.empty()) cout << " ";
    }
}




int main()
{
	stack<int>s;
	s.push(3);
	s.push(2);
	s.push(1);
reverse(s);
	return 0;
}
