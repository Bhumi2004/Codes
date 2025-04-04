#include<bits/stdc++.h>
using namespace std;
int toInt(string s) {
    int num = 0;
    for (int i = 0; i < s.length(); i++) {
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

int postfixexp(vector<string>& arr)
{
	stack<int>temp;
	int res=0;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]!="+" && arr[i]!="-" && arr[i]!="*" && arr[i]!="/")
		{
			temp.push(toInt(arr[i]));
		}
		
		else{
			int val1=temp.top();
			temp.pop();
			int val2=temp.top();
			temp.pop();
			if(arr[i]=="+") temp.push(val1+val2);
			else if(arr[i]=="-") temp.push(val2-val1);
			else if(arr[i]=="*") temp.push(val1*val2);
			else if(arr[i]=="/") temp.push(val2/val1);

			
			
		}
		
	}
	return temp.top();
}
int main() {
vector<string> expr;
expr.push_back("2");
expr.push_back("3");
expr.push_back("1");
expr.push_back("*");
expr.push_back("+");
expr.push_back("9");
expr.push_back("-");
    // equivalent to: 2 + (3 * 1) - 9 = -4

    int result = postfixexp(expr);
    cout << "Result: " << result << endl;
    return 0;
}

