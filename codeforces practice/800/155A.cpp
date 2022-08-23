#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    int best=INT_MIN;
    int worst=INT_MAX;
    int count=0;
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
        if (i!=0)
        {
            if (arr[i]<worst)
            {   
                count++;
            }
            else
            if (arr[i]>best)
            {
                count++;
            }
        }
        if (arr[i]==max(arr[i],best))
        {
            best=arr[i];
        }
        if (arr[i]==min (arr[i],worst))
        {
            worst=arr[i];
        }
        
    }
    cout<<count<<endl;
    return 0;

}