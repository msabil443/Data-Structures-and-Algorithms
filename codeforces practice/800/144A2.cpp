#include <iostream>
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
    int maxe=INT_MIN;
    int mine=INT_MAX;
    int mini=0;
    int maxi=0;
    for (int i=0; i<a; i++)
    {
        if (arr[i]<=mine)
        {
            mine=arr[i];
            mini=i;
        }
        if (arr[i]>maxe)
        {
            maxe=arr[i];
            maxi=i;
        }
    }
    // cout<<maxe<<endl<<mine<<endl<<maxi<<endl<<mini<<endl;
    if (maxi<mini)
    {
        cout<<(maxi+(a-mini-1));

    }
    else
        cout<<(maxi+(a-mini-1)-1);
    return 0;
}