#include <iostream>
#include <algorithm>
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
    int s;
    cin>>s;
    int res=0;
    res=binary_search(arr,arr+a,s);
    cout<<res;
    return 0;
}