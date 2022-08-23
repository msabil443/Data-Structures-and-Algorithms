#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arra[n], arrb[n];
        for (int i=0; i<n; i++)
            cin>>arra[i];
        for (int i=0 ;i<n; i++)
            cin>>arrb[i];

        sort (arra,arra+n);
        sort (arrb,arrb+n,greater<int>());
        int sum=0;
        for (int i=0; i<k; i++)
        {
            if (arra[i]<arrb[i])
            {
                arra[i]=arrb[i];
            }
            // for (int i=0; i<)
        }
        for (int i=0; i<n; i++)
        {
            sum+=arra[i];
        }
        cout<<sum<<endl;
    }
}