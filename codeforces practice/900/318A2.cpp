#include <iostream>
using namespace std;
int main ()
{
    long long int n,k;
    cin>>n>>k;
    long long int res=0;
    if (n&1)
    {
        if (k>0 && k<=(n/2)+1)
        {
            res=1+(k-1)*2;
        }
        else
        {
            res=2+((k-((n/2)+1))-1)*2;
        }
    }
    else
    {
        if (k>0 && k<=(n/2))
        {   
            res=1+(k-1)*2;
        }
        else
        {
            res=2+((k-(n/2)-1))*2;
        }
    }
    cout<<res<<endl;
    return 0;
}