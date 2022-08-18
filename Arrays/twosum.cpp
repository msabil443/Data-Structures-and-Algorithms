//given an array you have to find out the indices of the pair of elements that form the target sum

//This is order of n squared complexity not very viable to code like this!!!!
//check out aother code!!!

//Here I just made nested loop which will take one element and then it will check the sum of that element with the
//other ones and if the sum is equal to the given target sum then it will store the indices and at last it will print the 
//numbers stored in the indices



#include <bits/stdc++.h>
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
  int res[2];
  for (int i=0; i<a; i++)
  {
    int k=arr[i];
    for (int j=0; j<a; j++)
    {
      if (i!=j)
      {
        if ((arr[j]+arr[i])==sum)
        {
          res[0]=i;
          res[1]=j;
          break;
        }
      }
    }
  }
  // for (int i=0; i<2; i++)
  // {
  //   cout<<res[i]<<" ";
  // }
  for (int i=0; i<2; i++)
  {
    cout<<arr[res[i]]<<" ";
  }

  return 0;
}
