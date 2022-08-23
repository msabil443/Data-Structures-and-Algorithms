#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int solve ()
{
    string s;
    cin>>s;
    unordered_map<char,char>um;
    
    for (int i=1; i<s.length(); i++)
    {
        um[s[i-1]]=s[i];
    }
    unordered_map<char,char>::iterator i;
    string s2;
    int j=0;
    for (i=um.begin(); i!=um.end(); i++)
    {
        cout<<i->first;
    }
    // for (int k=0; k<s2.length(); k++)
    // {
    //     cout<<s2[k];
    // }
    cout<<endl;
    return 0;
}

int main ()
{
    int tt;
    cin>>tt;
    while (tt--){solve ();}return 0;
}