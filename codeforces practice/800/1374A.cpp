#include <iostream>
using namespace std;

int solve ()
{
    long long int x,y,n;
    cin>>x>>y>>n;
    int count=0;
    if (n-n%x+y<=n)
    {
        cout<<n-n%x+y<<endl;
    }
    else
        cout<<n-n%x-(x-y)<<endl;
    return 0;
}

int main ()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}