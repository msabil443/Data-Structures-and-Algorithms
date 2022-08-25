#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int n,a;
    cin>>n>>a;
    int arr[a];
    for (int i=0 ;i<a; i++)
    {
        cin>>arr[i];
    }
    sort (arr,arr+a);
    vector<int>v;
    for (int i=n-1;i<a; i++)
    {
        v.push_back((arr[i]-arr[i-(n-1)]));
    }
    sort (v.begin(),v.end());
    cout<<v[0];
    // cout<<endl;
    return 0;
}