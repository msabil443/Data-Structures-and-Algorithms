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
    int n=0;
    cin>>n;
    int number=(int)(log2(n));
    string s;
    s=bitset<64>(n).to_string().substr(64 - number - 1);
    // for (int i=0; i<s.length(); i++)
    // {
    //     cout<<s[i];
    // }
    int count1=0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='1')
            count1++;
    }
    if (count1==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if (count1>1)
    {
        cout<<count1-1<<endl;
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
   int t;
   cin>>t;
  while (t--) {solve();
  }

   return 0;
}