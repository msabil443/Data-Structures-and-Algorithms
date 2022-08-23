//did this in 5 min only yay :D

#include <iostream>
using namespace std;
int solve ()
{
    int a,b;
    cin>>a>>b;
    
    int target=abs(a-b);
    if (a==b)
    {
        cout<<0<<endl;
        return 0;
    }
    if (target%10==0)
    {
        cout<<target/10<<endl;
    }
    else
    {
        cout<<(target/10)+1<<endl;
    }
    return 0;

}
int main ()
{
    int tt;
    cin>>tt;while (tt--){solve ();}return 0;
}