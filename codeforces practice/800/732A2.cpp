#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cin>>n>>k;
    int res=0;
    if ((n%10)==k)
    {
        cout<<1<<endl;
        return 0;
    }
    for (int i=1; i<10000; i++)
    {
        if ((n*i)%10==0)
        {
            res=i;
            break;

        }
        else
        if (((n*i)%10)==k)
        {
            res=i;
            break;
        }
        else
        if ((n*i)%k==0 && ((n*i)-k)%10==0)
        {
            res=i;
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}