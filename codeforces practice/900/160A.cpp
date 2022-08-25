#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    int sum=0;
    
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int target=sum;
    target=(target/2)+1;
        
    sort (arr,arr+a,greater<int>());
    int count=0;
    for (int i=0; target>0; i++)
    {
        target=target-arr[i];
        count++;
    }   
    cout<<count<<endl;
    return 0;
}