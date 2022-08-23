#include <bits/stdc++.h>
using namespace std;
int solve ()
{
    int n,k;
    cin>>n>>k;
    int a1[n];
    int a2[n];
    for (int i=0; i<n; i++)
    {
        cin>>a1[i];
    }
    for (int i=0; i<n; i++)
    {
        cin>>a2[i];
    }
    sort (a1,a1+n);
    sort (a2,a2+n,greater<int>());
    // for (int i=0; i<n; i++)
    // {
    //     cout<<a1[i]<<" ";
    // }
    // cout<<endl;
    // for (int i=0 ;i<n; i++)
    // {
    //     cout<<a2[i]<<" ";
    // }
    int sum1=0;
    for (int i=0 ;i<n; i++)
    {
        sum1+=a1[i];
    }
    if (a1[0]>a2[0])
    {
        cout<<sum1<<endl;
        return 0;
    }
    int sum=0;
    for (int i=0; i<k; i++)
    {
        a1[i]=a2[i];
        

    }
    for (int i=0 ;i<n; i++)
    {
        sum+=a1[i];
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