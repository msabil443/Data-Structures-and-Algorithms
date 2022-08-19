#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    string s;
    cin>>s;

    for (int i=0; i<a; i++)
    {
        if (s[i]<97)
        {
            s[i]+=32;
        }
    }
    int arr[26];
    for (int i=0; i<a; i++)
    {
        if (arr[s[i]-'a']<1)
        {
            arr[s[i]-'a']++;
        }
    }
    int flag=0;
    for (int i=0; i<26; i++)
    {
        if (arr[s[i]-'a']==0)
        {
            flag=1;
        }
    }
    if (flag)
    {
        cout<<"NO";
    }
    else    
        cout<<"YES";
    return 0;
}