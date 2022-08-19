// #include <iostream>
// #include <map>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[5];
    // arr[0]=a/1;
    // arr[1]=a/5;
    // arr[2]=a/10;
    // arr[3]=a/20;
    // arr[4]=a/100;
    map<int,int>m;
    m[a/1]=1;
    m[a/5]=5;
    m[a/10]=10;
    m[a/20]=20;
    m[a/100]=100;
    map<int,int>::iterator i;
    int result=0;
    for (i=m.begin(); i!=m.end(); i++)
    {
        result += (i -> first);
        cout<<result<<endl;
        (i -> second)= a%(i -> second);
        m.insert ( {i -> first, i -> second} );
        cout<<i->second<<endl;
    }
    
    cout<<result<<endl;
    
    return 0;
}