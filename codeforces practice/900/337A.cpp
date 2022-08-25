#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main ()
{
    int n,a;
    cin>>n>>a;
    int arr[a];
    
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort (arr,arr+a);
    map<int,int>m;
    for (int i=0 ;i<a; i++)
    {
        m[arr[i]]++;
    }
    map<int,int>::iterator k;
    int max=INT_MIN;
    for (k=m.begin(); k!=m.end(); k++)
    {
        if (k->second>max)
        {
            max=k->second;
        }
    }
    if (max>=n)
    {
        cout<<0<<endl;
        return 0;
    }
    // cout<<arr[n]-arr[0]<<endl;
    for (int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";    
    }
    cout<<endl;
    cout<<arr[n-1]-arr[0]<<endl;
    return 0;
}