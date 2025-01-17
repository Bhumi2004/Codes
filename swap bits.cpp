#include<bits/stdc++.h>
using namespace std;
int swapbits(unsigned int x, unsigned int p1,  unsigned int p2, unsigned int n)
{
	unsigned int set1= (x>>p1)&((1U<<n)-1);
		unsigned int set2= (x>>p2)&((1U<<n)-1);
		unsigned int XOR= (set1^set2);
		XOR= (XOR<<p1)| (XOR<<p2);
		unsigned int result= x^XOR;
		
		return result;

}
int main()
{
    int res = swapbits(28, 0, 3, 2);
    cout << "Result = " << res;
    return 0;
}

