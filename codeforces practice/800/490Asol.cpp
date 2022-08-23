#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    vector<int>num1;
    vector<int>num2;
    vector<int>num3;
    int mini=0;
    int num=0;
    for (int i=0; i<a; i++)
    {
        cin>>num;
        if (num==1)
        {
            num1.push_back(i);
        }
        else
        if (num==2)
        {
            num2.push_back(i);
        }
        else
        if (num==3)
        {
            num3.push_back(i);
        }
    }
    mini=min(num1.size(),min(num2.size(),num3.size()));
    cout<<mini<<endl;
    for (int i=0; i<mini; i++)
    {   
        cout<<num1[i]+1<<" "<<num2[i]+1<<" "<<num3[i]+1<<endl;
    }
    return 0;
}