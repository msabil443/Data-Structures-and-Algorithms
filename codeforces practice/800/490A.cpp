#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main ()
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
    int res=INT_MAX;
    map<int,int>::iterator k;
    for (k=m.begin(); k!=m.end(); k++)
    {
        if (k->second<res)
        {
            res=k->second;
        }
    }
    if (m.size()==3)
    {
        cout<<res<<endl;
    }
    else
        cout<<0<<endl;
    
    for (int i=0; i<a; i++)
    {
        if (arr[i]==1)
        {
            cout<<i<<" ";
        }
        else
        if (arr[i]==)
    }
    return 0;
}