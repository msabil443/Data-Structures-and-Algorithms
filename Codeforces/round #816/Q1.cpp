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
  int a,b;
  cin>>a>>b;
  int res=0;
  if (b>a)
  {
    swap(a,b);
  }
  if (a==1 && b==1)
  {
    cout<<0<<endl;
    return 0;
  }
  if ((b)%2==0)
    res=(2*((b/2)-1))+(b)+(a-1)+1;
  else
    res=(4*(((b+1)/2)-1))+1+(a-1);

    cout<<res<<endl;
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