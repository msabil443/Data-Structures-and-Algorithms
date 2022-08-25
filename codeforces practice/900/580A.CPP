// #include <iostream>
// using namespace std;
// int main ()
// {
//     int a;
//     cin>>a;
//     int arr[a];
//     for (int i=0; i<a; i++)
//     {
//         cin>>arr[i];
//     }
//     int count=0;
//     int largest=INT_MIN;
//     int flag=0;
//     for (int i=1; i<a; i++)
//     {
//         if (arr[i]>=arr[i-1])
//         {
//             count++;
//         }
//         else
//         {
//             largest=max(largest,count);
//             count=0;
//             flag=1;
//         }
//     }
//     if (flag)
//     {
//         cout<<largest+1<<endl;
//     }
//     else
//         cout<<count+1<<endl;
//     return 0;

// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    for (int i=0 ;i<a; i++)
    {
        cin>>arr[i];
    }
    int largest=0;
    int count=0;
    vector<int>v;
    for (int i=1; i<=a; i++)
    {
        count++;
        if (arr[i]<arr[i-1] || arr[i]==arr[a])
        {
            v.push_back(count);
            count=0;
        }
    }

    // for (int i=0; i<a; i++)
    // {
    //     cout<<v[i]<<" ";

    // }
    sort (v.begin(),v.end(),greater<int>());
    cout<<v[0]<<endl;


    // cout<<largest<<endl;
    return 0;
}