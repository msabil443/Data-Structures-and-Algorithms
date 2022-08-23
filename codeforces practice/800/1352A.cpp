#include <iostream>
#include <vector>
using namespace std;

int solve ()
{
    int k;
    cin>>k;
    int n=k;
    int j=0;
    vector<int>v;
    for (int a=10,l=1; n!=0; n=n/10,a=a*10,l=l*10)
    {   j=n;
        if (j%a)
        {
            j=(j%a)*l;
            v.push_back(j);
        }
        else
        {
            continue;
        }
    }
    for (int i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<" ";
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