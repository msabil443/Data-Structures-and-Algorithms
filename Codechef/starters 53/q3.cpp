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
    ll a;
    cin>>a;
    ll arr1[a];
    for (ll i=0 ; i<a; i++)
    {
        cin>>arr1[i];
    }
    ll arr2[a];
    for (ll i=0; i<a; i++)
    {
        cin>>arr2[i];

    }
    ll count1=0, count2=0;
    for (ll i=0 ;i<a; i++)
    {
        if (arr1[i]==max(arr1[i],arr2[i]))
        {
            count2=count2+(arr1[i]-arr2[i]);
        }
        else
        {
            count1=count1+(arr2[i]-arr1[i]);
        }
    }
    if (count1!=count2)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<count2<<endl;
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
        solve ();
    }
  

   return 0;
}