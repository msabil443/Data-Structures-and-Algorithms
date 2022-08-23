#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    if (a==min(a,b))
    {
        b=b-a;
        cout<<a<<" "<<b/2;
    }else
    {
        a=a-b;
        cout<<b<<" "<<a/2;
    }
    return 0;
}