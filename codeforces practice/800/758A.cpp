#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    int maxe=INT_MIN;
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
        if (arr[i]>maxe)
        {
            maxe=arr[i];
        }
    }
    int sum=0;
    for (int i=0; i<a; i++)
    {
        if (arr[i]!=maxe)   
        {
            sum+=(maxe-arr[i]);
        }
    }
    cout<<sum<<endl;
    return 0;

}