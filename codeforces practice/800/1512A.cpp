#include <iostream>
#include <map>
using namespace std;

int solve()
{
    int a;

    cin>>a;
    int arr[a];
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    map<int,int>m;
    for (int i=0; i<a; i++)
    {
        m[arr[i]]++;
    }
    int num=0;
    map<int,int>::iterator i;
    for (i=m.begin();i!=m.end(); i++)
    {
        if (i->second==1)
        {
            num=i->first;
        }
    }
    for (int i=0; i<a; i++)
    {
        if (arr[i]==num)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
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