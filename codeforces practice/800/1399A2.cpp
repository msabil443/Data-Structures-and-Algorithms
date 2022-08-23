#include <iostream>
#include <algorithm>
using namespace std;

int solve ()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    sort (arr,arr+a);
    for (int i=0; i<a-1; i++)
    {
        if (arr[i+1]-arr[i]>1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
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
