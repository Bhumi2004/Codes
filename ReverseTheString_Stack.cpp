#include<bits/stdc++.h>
using namespace std;
string reverse(const string &s)
{
	stack<char>st;
	string reversedstr="";
	for(int i=0;i<s.length();i++)
	{
		st.push(s[i]);
	}
while(!st.empty())
{
	reversedstr +=st.top();
	st.pop();
}
return reversedstr;
	
}

int main() {
    string s = "hello";
    cout << reverse(s) << endl;  // Output: "olleh"
    return 0;
}
