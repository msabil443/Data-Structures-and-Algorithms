#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a,b,c) min(a,min(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a,a+n


using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;


int solve (int i)
{


  int a;
  cin>>a;
  // cout<<"Case #"<<i<<": ";
  int arr[a];
  int max=INT_MIN;
  int min=INT_MAX;
  for (int i=0; i<a; i++)
  {
    cin>>arr[i];
    if (arr[i]>max)
    {
      max=arr[i];
    }
    if (arr[i]<min)
    {
        min=arr[i];
    }

  }
  cout<<"Case #"<<i<<": ";
  int arr2[a];
  
  for (int i=0; i<a; i++)
  {
    arr2[i]=arr[i];

    
  }
  sort (arr2, arr2+a,greater<int>());
  int res=0;
  for (int i=0; i<a; i++)
  {
    for (int j=0; j<a; j++)
    {
        
        if (arr[i]==max)
        {
            if (arr2[j]<arr[i])
            {
                res=arr2[j];
                cout<<res<<" ";
                break;
            }
        }else
        {    
            if (min==arr2[j] && i==j)
            {
                cout<<-1<<" ";
            }
            else
            if (arr2[j]<=2*arr[i])
            {
                res=arr2[j];
                cout<<res<<" ";
                break;
            }
           
            
        }
    
    }
  }  
  cout<<endl;
  
  return 0;

}


int main (){
   
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int tt;
   cin>>tt;
   for (int i=1; i<=tt; i++)
    {
      
      solve (i);
    }
  

   return 0;
}