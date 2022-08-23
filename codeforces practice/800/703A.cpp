//solved in 7 min 22 sec
#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int tt;
    cin>>tt;
    int a,b;
    int countm=0, countc=0;
    while (tt--)
    {
        cin>>a>>b;
        if (a>b)
        {
            countm++;
        }
        else
        if (a<b)
        {
            countc++;
        }
        
    }
    if (countm>countc)
    {
        cout<<"Mishka";
    }
    if (countc>countm)
    {
        cout<<"Chris";
    }
    if (countc==countm)
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}