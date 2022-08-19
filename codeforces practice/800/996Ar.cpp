#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int y=0;
    int arr[]={100,20,10,5,1};
    for (int i=0; i<5; i++)
    {
        y+=a/(arr[i]);
        a=a%arr[i];
    }
    cout<<y<<endl;
    return 0;
}