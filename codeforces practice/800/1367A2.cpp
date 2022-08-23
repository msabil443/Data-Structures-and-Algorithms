#include <bits/stdc++.h>
using namespace std;

int solve ()
{
    string s;
    cin>>s;
    // string a;
    // a[0]=s[0];
    vector<char>a;
    // a[0]=s[0];
    for (int i=1; i<=s.length(); i+=2)
    {
        a.push_back(s[i]);
    }
    cout<<s[0];
    for (int i=0; i<a.size(); i++)
    {
        cout<<a[i];

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