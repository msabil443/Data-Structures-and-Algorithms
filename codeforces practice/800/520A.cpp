#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    char arr[a][b];
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            arr[i][j]='#';
        }
        
    }
    for (int i=1; i<a; i+=2)
    {
        for (int j=0; j<b; j++)
        {
            arr[i][j]='.';
        }
        
    }
    int k=0;
    for (int i=1; i<a; i+=2)
    {
        for (int j=0; j<b; j++)
        {
            if (k%2==0)
            {
                arr[i][b-1]='#';
            }
            else
                arr[i][0]='#';
        }
        k++;
    }
    
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}