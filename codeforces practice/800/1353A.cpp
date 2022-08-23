#include <bits/stdc++.h>
using namespace std;
int solve ()
{
    int n,k;
    cin>>n>>k;
    vector<int>v1;
    vector<int>v2;
    int sum1=0,sum2=0;
    
    for (int i=0; i<n; i++)
    {
        int l=0;
        cin>>l;
        v1.push_back(l);
    }
    for (int j=0; j<n; j++)
    {
        int l=0;
        cin>>l;
        v2.push_back(l);
    }
    for (int i=0; i<v1.size(); i++)
    {
        sum1+=v1[i];
        
    }
    for (int i=0; i<v2.size(); i++)
    {
        sum2+=v2[i];
        
    }
    // if (sum1>=sum2)
    // {
    //     cout<<sum1<<endl;
    //     return 0;
    // }
    // sort (v1.begin(),v1.end());
    // sort (v2.begin(),v2.end(),greater<int>());
    // for (int i=0; i<k; i++)
    // {
    //     v1[i]=v2[i];
    // }
    // int sum=0; 
    // for (int i=0; i<v1.size(); i++)
    // {
    //     sum+=v1[i];
        
    // }
    // cout<<sum<<endl;
    for (int i=0; i<v2.size(); i++)
    {
        v1.push_back(v2[i]);
    }
    int sum=0;
    sort (v1.begin(),v1.end(),greater<int>());
    for (int i=0; i<k+1; i++)
    {
        sum+=v1[i];
    }

    cout<<sum<<endl;
    return 0;
}
int main ()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}