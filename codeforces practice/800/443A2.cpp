//another way to do it without using the maps
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline (cin,s);

    int a[26]={};
    for (int i=1; i<s.size()-1; i+=3)
    {
        if (a[s[i]-'a']<1)
        {
            a[s[i]-'a']++;
        }
    }
    int sum=0;
    for (int i=0; i<26 ;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}