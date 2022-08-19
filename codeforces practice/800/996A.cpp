#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[5];
    
    int min=INT_MAX;
    int result=0;
    int index=0;
    int ind=0;
    for (int j=0; j<5; j++)
    {
        arr[0]=a/1;
        arr[1]=a/5;
        arr[2]=a/10;
        arr[3]=a/20;
        arr[4]=a/100;
        
        for (int i=0; i<5; i++)
        {
            if (arr[i]<min)
            {
                min=arr[i];
                
                if (i==0)
                {
                    index=1;
                }
                if (i==1)
                {
                    index=5;
                }
                if (i==3)
                {
                    index=20;
                }
                if (i==4)
                {
                    index=100;
                }if (i==2)
                {
                    index=10;
                }
            }
            
        }
        
        a=a%index;
        result+=min;
    }
    cout<<result<<endl;
    return 0;
}