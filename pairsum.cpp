void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    //Your code here
    for(const auto& p:v)
    {
        sum+=p.second;
    }
    
    cout<<sum;
    cout<<endl;
}
