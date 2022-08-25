#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    if (s.length()==1)
    {
        cout<<s;
        return 0;
    }
    for (int i=0; i<=(s.length()-2); i++)
    {
        if (s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            s[i]='0';
            s[i+1]='0';
            s[i+2]='0';
        }
    }
    string s2=s;
    int j=0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]!='0')
        {
            s2[j]=s[i];
            j++;
            if (s[i+1]=='0')
            {
                s2[j]=' ';
                j++;
            }
        }
        
    }
    // s[i-1]=='0' || 
    for (int i=0; i<j; i++)
    {
        cout<<s2[i];
        
    }
    cout<<endl;
    return 0;
}