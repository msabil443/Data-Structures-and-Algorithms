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
    string s;
    cin>>s;
    vector<int>pos;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='0')
        {
            pos.push_back(i);
        }
    }
    vector<int>res;
    for (int i=0; i<pos.size(); i++)
    {
        res.push_back(arr[pos[i]]);
    }
    sort(res.begin(),res.end());
    cout<<res[0]<<"\n";
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