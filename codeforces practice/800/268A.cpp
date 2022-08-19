// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int  main ()
{
    int a;
    cin>>a;
    pair<int,int>b[a];
    for (int i=0; i<a; i++)
    {
        
        // b.make_pair(a,b);
        cin>>b[i].first;
        cin>>b[i].second;
    }
    // for (int i=0; i<a; i++)
    // {
    //     cout<<b[i].first<<" "<<b[i].second;
    // }
    int count=0;
    for (int i=0; i<a; i++)
    {
        for (int j=i+1; j<a; j++)
        {
            if (b[i].first==b[j].second)
                count++;
            
            if (b[j].first==b[i].second)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}