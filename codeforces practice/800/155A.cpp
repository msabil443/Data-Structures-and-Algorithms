#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    int min=INT_MAX;
    int max=INT_MIN;
    int count=0;
    vector<int> v;
    for (int i=0; i<a; i++)
    {   

        cin>>arr[i];
        v.push_back(arr[i]);
        
        if (x>max)  
        {
            max=x;
        }
        if (x<min)
        {
            min=x;
        }
    }
    sort (v.begin(),v.end());
    for (int i=0; i<a; i++)
    {
        if (arr[i])
    }
    cout<<count<<endl;
}