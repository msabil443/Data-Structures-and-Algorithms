#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    int target=0;
    int res=0;
    for (int i=0; i<10; i++)
    {
        sum=5*((n*(n+1))/2);
        target=sum+k;
        if (target>240)
        {
            n--;
        }
        else
        {    res=n;
            break;
        }
    }
    cout<<res<<endl;
    return 0;

}