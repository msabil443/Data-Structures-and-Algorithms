#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve ()
{
    int a;
    cin>>a;
    int arr[a];
    unordered_set <int> s;
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    for (int i=0; i<a; i++)
    {
        cout<<s[i];
    }
}

int main ()
{
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}