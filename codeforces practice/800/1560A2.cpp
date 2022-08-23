#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    vector<int>v;
    for (int i=1; i<1e6; i++)
    {
        if (i%3!=0 && i%10!=3)
        {
            v.push_back(i);
        }
    }
    while (tt--)
    {
        int a;
        cin>>a;
        cout<<v[a-1]<<endl;
    }
    return 0;
}