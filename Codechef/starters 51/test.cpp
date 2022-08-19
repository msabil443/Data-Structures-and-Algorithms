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
    int nu,le,ar;
    int arr[1001];
    cin>>nu;
    arr[1]=0;
    le=0;
    ar=0;
    for (int i=2; i<=nu; i++)
    {
        if (i%2==0)
        {
            arr[i]=--le;
        }
        else
        {
            arr[i]=++ar;
        }
    }
    for (int i=1; i<=nu; i++)
    {
        cout<arr[i]-le+1<<" ";

    }
    cout<<endl;
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
   int t;
   cin>>t;
  while (t--) {solve();
  }

   return 0;
}