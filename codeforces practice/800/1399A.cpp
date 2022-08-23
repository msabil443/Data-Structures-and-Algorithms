#include <iostream>
#include <map>
#include <vector>
#include <unordered_set>
using namespace std;

int solve ()
{
    int a;
    cin>>a;
    int arr[a];
    map<int,int>m;
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
        // m[arr[i]]++;
    }
    for (int i=0; i<a; i++)
    {
        m[arr[i]]++;
    }
    map<int,int>::iterator i;
    vector<int> v;
    // unordered_set <int> s;
    for (i=m.begin(); i!=m.end(); i++)
    {
        
        v.push_back(i->first);
        // s.insert(i->first);
    }
    if (m.size()==1)
    {
        cout<<"YES\n";
        return 0;
    }
    int flag=0;
    for (int i=0; i<v.size(); i++)
    {
        for (int j=1; j<v.size(); j++)
        {
            if (abs(v[i]-v[j])>1)
            {
                flag=1;
            }
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

int main ()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
}
