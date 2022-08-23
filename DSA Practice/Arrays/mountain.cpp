//two sum with a most optimised code for time complexity
//basic idea is to take a number and 
//Using sets
//solved using order of n time complexity

#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>

using namespace std;

int main ()
{
    int a;
    cin>>a;
    int sum=0;
    cin>>sum;
    int arr[a];
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    vector <int> res;
    unordered_set<int> s;
    for (int i=0; i<a; i++)
    {
        int x=sum-arr[i];
        if (s.find(x)!=s.end())
        {
            res.push_back(x);
            res.push_back(arr[i]);
            break;
        }
        s.insert(arr[i]);
    }
    
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}