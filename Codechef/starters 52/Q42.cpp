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

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}

int solve ()
{
    int a;
    cin>>a;
    vector<int>v;
    for (int i=0; i<a; i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    sort (v.begin(),v.end());
    int temp=0;
    for (int i=0; i<v.size(); i++)
    {
        if (v[i]+1<v[v.size()-i])
        { 
            temp=max(v[v.size()-i],v[i]);
            v[]
        }
        else
            v[v.size()-i]=1;
    }

    int sum=0;
    for (int i=0; i<v.size(); i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;

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