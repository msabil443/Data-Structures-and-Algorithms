#include <iostream>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    char arr[x][y];
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            arr[i][j]='#';
        }
        // if (i%2!=0 || j%2==0)
        
    }

    for (int i=0; i<x; i++)
    {
        if (i%2!=0)
        {
            for (int j=0; j<y; j++)
            {
                
                arr[i][j]='.';
                
            }
        }

    }
    int h=1;
    int i=2*h;
    while (i<=x)
    {
        if (h%2!=0) arr[i][y]='#';
        else    arr[i][1]='#';
        h++;
        i=2*h;
    }
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}