#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int count=0;
    for (int i=1 ;i<s.length(); i++)
    {
        if (s[i]==s[i-1]&& count<=7)
        {
            count++;
        }
        else
        {
            if (s[i]!=s[i-1])
            {
                count=0;
            }
        }
        if (count+1==7)
        {
            break;
        }
    }
    // cout<<count<<endl;
    if (count+1==7)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}