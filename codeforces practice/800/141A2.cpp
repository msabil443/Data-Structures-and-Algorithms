#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
    string a,b,c;
    cin>>a>>b>>c;
    a+=b;
    sort (a.begin(),a.end());
    sort(c.begin(),c.end());
    int flag=0;
    if (a.length()!=c.length())
    {
        cout<<"NO\n";
        return 0;
    }
    for (int i=0; i<a.length(); i++)
    {
        if (a[i]!=c[i])
        {
            flag=1;
        }
    }
    if (flag)
    {
        cout<<"NO\n";
    }
    else
        cout<<"YES\n";
    return 0;
}