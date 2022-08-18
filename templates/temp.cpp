#include <iostream>
using namespace std;

template<class T>
T abc (T a, T c, T b)
{
    a=b*c;
    return (a+b+c);
}

int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res=0;
    res=abc(a,b,c);
    cout<<res<<endl;
    return 0;
}