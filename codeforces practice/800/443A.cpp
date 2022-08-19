#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main ()
{
    string s;
    getline (cin,s);
    vector<char>a;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='{' || s[i]==',' || s[i]==' ' || s[i]=='}')
        {
            continue;
        }
        else
            a.push_back(s[i]);
    }
    map<char,int> m;
    for (int i=0; i<a.size(); i++)
    {
        m[a[i]]++;
    }
    map<char,int>::iterator i;
    int count=0;
    for (i=m.begin(); i!=m.end(); i++)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;
}