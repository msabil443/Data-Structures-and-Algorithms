#include <iostream>
#include <vector>
using namespace std;

int solve ()
{
    int a;
    cin>>a;
    if ((a/2)%2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
        return 0;
    }
    vector<int>v,v2;
    int sum=0;
    for (int i=1; i<=a; i++)
    {
        if (i%2==0)
        {
            v.push_back(i);
            sum+=i;
        }

        // sum+=i;
    }

    int sum2=0;
    
    for (int i=1; i<=a-2; i++)
    {
        if (i%2!=0)
        {
            v2.push_back(i);
            sum2+=i;
        }
    }
    
    int sumres=sum-sum2;
    v2[v2.size()]=sumres;
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
        
    }
    // cout<<endl;
    for (int i=0; i<v.size(); i++)
    {
        cout<<v2[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}

int main ()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}