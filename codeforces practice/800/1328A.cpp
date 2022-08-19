#include <iostream>
using namespace std;

int solve ()
{
    int a,b;
    cin>>a>>b;
    
    int res=0;

    res=b-(a%b);
    if (a%b==0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<res<<endl;
    
    
    
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