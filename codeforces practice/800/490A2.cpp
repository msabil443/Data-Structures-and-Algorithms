#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    map<int,int>m;
    for (int i=0; i<a; i++)
    {
        m[arr[i]]++;
    }
    map<int,int>::iterator k;
    int mini=INT_MAX;
    int num=0;
    for (k=m.begin(); k!=m.end(); k++)
    {
        if (k->second<mini)
        {
            mini=k->second;
            num=k->first;
        }
    }
    if (m.size()!=3)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<mini<<endl;

    vector<int>ind1;
    vector<int>ind2;
    vector<int>ind3;
    for (int i=0; i<a; i++)
    {
        if (arr[i]==1)
        {
            ind1.push_back(i);
        }
        else
        if (arr[i]==2)
        {
            ind2.push_back(i);
        }
        else
        if (arr[i]==3)
        {
            ind3.push_back(i);
        }
    }
    for (int i=0; i<min(ind1.size(),min(ind2.size(),ind3.size())); i++)
    {
        cout<<ind1[i]+1<<" "<<ind2[i]+1<<" "<<ind3[i]+1<<endl;
    }
    return 0;

}