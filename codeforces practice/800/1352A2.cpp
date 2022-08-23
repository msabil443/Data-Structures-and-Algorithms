#include <iostream>
#include <vector>
using namespace std;

int solve ()
{
    int k;
    cin>>k;
    int n=k;
    int summand=0;
    for (int i=0; k!=0; i++)
    {
        if (k%10!=0)
        {
            summand++;
        }
        k/=10;
    }
    cout<<summand<<"\n";
    for (int i=1,j=10; n!=0; i=i*10,j*=10, n/=10)
    {
        int l=n%10;
        // cout<<i;cout<<" ";
        // cout<<n<<" ";
        // cout<<l<<" ";
        // // cout<<j<<" ";
        
        if (l*i)
        {   
            
            cout<<l*i<<" ";
        }// cout<<n;cout<<endl;
    }
    cout<<endl;
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