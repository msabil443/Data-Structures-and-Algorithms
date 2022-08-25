//some numbers are given then you have to find out the highest mountain in the given array

//identify where the peaks are (aka first element is small and then big then small)
//iterate through all the peaks and find whether this is a mountain or not

/********************************************************
 * brute force which didnt work my first though about this program!!
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int arr[a];
    int maxe=INT_MIN;
    int maxi=0;
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
        if (arr[i]>maxe)
        {
            maxe=arr[i];
            maxi=i;
        }
    }
    int count=0;
    for (int i=maxi; arr[i]>=arr[i-1];i--)
    {
        count++;
    }
    cout<<count<<endl;
    for (int i=maxi; arr[i]>=arr[i+1];i++)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;

}
*/
//NOW COMES THE ACTUAL PROGRAM

#include <iostream>
#include <vector>
using namespace std;

int highest_mountain (vector<int> a)
{
    int n=a.size();
    int largest=0;
    //iterating through the vector and calculating the peaks we will start from 2nd element because first one would not be a peak and 
    //iterate to the second last one because it would not be a peak
    for (int i=1; i<=n-2; )
    {
        //checking if wheteher the given peak is a mountain or not
        if (a[i]>a[i-1] and a[i]>a[i+1])
        {
            int count=1;
            int j=i;
            //counting backwards
            while (j>=1 && a[j]>a[j-1])
            {
                j--;
                count++;
            }
            //counting forwards
            while (i<=n-2 and a[i]>a[i+1] )
            {
                i++;
                count++;
            }
            largest=max(largest,count);
        }
        else
        {
            i++;
        }
    }
    return largest;
}


int main ()
{
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-1,4};
    cout<<highest_mountain(arr);
    return 0;
}