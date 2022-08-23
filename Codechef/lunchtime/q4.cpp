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


int solve ()
{
  int a;
  cin>>a;
  int arr[a];
  for (int i=0; i<a; i++)
  {
    cin>>arr[i];
  }
  map<int,int>m;
  for (int i=0; i<a; i++)
  {
    m[arr[i]]++;
  }
  map<int,int>::iterator k;
  int maxi=INT_MIN;
  for (k=m.begin(); k!=m.end(); k++)
  {     
    if (k->second>maxi)
    {
        maxi=k->second;
    }
  } 
  if (a%2==0)
  {
    if (maxi>a/2)
    {
        cout<<"No\n";
    }
    else
        cout<<"Yes\n";
  }
  else
  {
    if (maxi>((a/2)+1))
    {
        cout<<"No\n";
    }
    else    
        cout<<"Yes\n";
  }
  return 0;
}




int main (){
   #ifndef ONLINE_JUDGE
   freopen ("input.txt","r",stdin );
   freopen ("output.txt","w", stdout);
   #endif
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
  int tt;
  cin>>tt;
  while (tt--)
  {
  solve();
  }

   return 0;
}