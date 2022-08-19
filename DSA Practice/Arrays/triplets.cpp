//bruteforce approach:three nested loops and then finding the solution
//using pairsum problem-----> order of (n^2)
//using twopointer problem ----> order of ()
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    int sum=0;
    cin>>sum;
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort (arr,arr+a);
    for (int i=0; i<=a-3; i++)
    {
        int j=i+1;
        
    }
}