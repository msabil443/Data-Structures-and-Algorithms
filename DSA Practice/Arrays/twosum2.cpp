//two sum with a bit more optimised code for time complexity
//basic idea is to take a number and 
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int a;
    cin>>a;
    int sum=0;
    cin>>sum;
    int arr[a];
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort (arr,arr+a);
    int target=0;
    int s=0;
    for (int i=0; i<a; i++)
    {
        target=sum-arr[i];
        s=binary_search(arr,arr+a,target);

    }
    cout<<target;
    cout<<s;
    return 0;
}