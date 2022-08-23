#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort (arr,arr+n);
    // vector<int>v; 
    int count=0;
    for (int i=0; i<n; i+=3)
    {
        if (i==0)
        {
            if (k-arr[2]>=0)
            {
                count++;
            }
        }
        else
        if (k-arr[i]>=0)
        {
            count++;
        }
    }
    cout<<count/3<<endl;
    return 0;
}