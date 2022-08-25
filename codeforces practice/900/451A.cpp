#include <iostream>
using namespace std; 
int main ()
{
    int a,b;
    cin>>a>>b;
    if (a%2!=0 && b%2!=0 || a==1 || b==1)
    {
        cout<<"Akshat\n";
    }
    else
        cout<<"Malvika\n";
    return 0;
}