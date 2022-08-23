#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int j=0;
    int pcount=0;
    int ccount=0;
    int arr[a];
    for (int i=0; i<a ;i++)
    {
        cin>>arr[i];
        if (arr[i]!=(-1))
        {

            pcount+=arr[i];
        }
        else
        {   
            if ((pcount-1)<0)
            {
                ccount++;
            }
            else
                pcount--;
            

        }
    }
    cout<<ccount<<endl;
    return 0;
}