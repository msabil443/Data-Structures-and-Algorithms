#include <iostream>
#include <vector>
using namespace std;
int solve ()
{
    int a;
    cin>>a;
    vector<int>v;
    for (int i=0; i<1e6; i++)
    {
        if (a%3!=0 && a%10!=3)
        {
            v.push_back(i);
        }
        else
        {
            continue;
        }
    }
    cout<<v[a]<<endl;
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