#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    
    if ((a-b)%10==0)
    {
        cout<<1<<endl;
        return 0;
    }
    for (int i=0; i<=10000; i++)
    {
        if (((a*i)%b==0 && ((a*i)-b)%10==0))
        {
            // if ((a*i)%b==0 )
            res=i;
            break;
        }
        
        if (!((a*i)%b==0 ^ ((a*i)-b)%10==0))
        {
            // if ((a*i)%b==0 )
            res=i;
            break;
        }
        // if ((a*i)%b==0)
        // {
        //     res=i;
        //     break;
        // }
        // if ((a*i)%10==0)
        // {
        //     res=i;
        //     break;
        // }
    }
    cout<<res<<endl;
    return 0;
 
}