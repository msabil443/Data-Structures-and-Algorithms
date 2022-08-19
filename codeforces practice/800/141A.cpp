#include <iostream>
#include <string>
#include <map>
using namespace std;
int main ()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s3;
    s3=s1+s2;
    map<char,int>m1;
    for (int i=0; i<s3.length(); i++)
    {
        m1[s3[i]]++;
    }
    string s4;
    cin>>s4;
    map<char,int>m2;
    for (int i=0; i<s4.length(); i++)
    {
        m2[s4[i]]++;
    }
    if (m1==m2)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}