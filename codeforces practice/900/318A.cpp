//brute force...

#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int>v;
    for (long long int i=1; i<=n; i++)
    {
        if (i&1 )
        {
            v.push_back(i);
        }
    }
    for (long long int i=1 ;i<=n; i++)
    {
        if (!(i&1))
        {
            v.push_back(i);
        }
    }
    // for (int i=0 ;i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    cout<<v[k-1]<<endl;
    return 0;
}