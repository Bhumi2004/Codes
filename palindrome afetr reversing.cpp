#include<iostream>
using namespace std;
int main()
{
	long n;
	cin>>n;
	long o=n;
	long reverse=0;
        long sum=0;
        long digit=0;
        while(n>0)
        {
            reverse=reverse*10+n%10;
            n/=10;
        }
        
        cout<<reverse<<endl;
        sum=reverse+o;
        cout<<"sum"<<sum<<endl;
        
        while(sum>0)
        {
             digit=digit*10+sum%10;
            sum/=10;
        }
        cout<<digit<<endl;
        if(digit==o)
        cout<<sum;
        else
        cout<<"no";
}
