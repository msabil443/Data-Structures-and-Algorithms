#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int solve ()
{
    int n;
    cin>>n;
    if (n==2 || n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if (n%2==0)
    {
       cout<<setprecision(10)<<ceil(double(n/2))-1<<endl; 
    }
    else
    cout<<setprecision(10)<<ceil(double(n/2))<<endl;
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
}
