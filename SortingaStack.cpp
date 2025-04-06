#include <bits/stdc++.h>
using namespace std;

stack<int> sorts(stack<int> arr)
{
    stack<int> str;

    while (!arr.empty())
    {
        int temp = arr.top(); // store the top element
        arr.pop();

        // Move elements from str back to arr if they're bigger than temp
        while (!str.empty() && str.top() <temp)
        {
            arr.push(str.top());
            str.pop();
        }

        str.push(temp); // place the correct value in sorted position
    }

    return str; // str is sorted now
}

int main()
{
    stack<int> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
s.push(92);
s.push(93);
    stack<int> sorted = sorts(s);

    while (!sorted.empty())
    {
        cout << sorted.top() << " ";
        sorted.pop();
    }

    return 0;
}

