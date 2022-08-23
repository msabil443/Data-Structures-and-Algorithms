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
  cout<<"Case #"<<i<<": ";
  if (a%5==0)
  {
    cout<<a/5<<endl;
  }
  else
  cout<<((a+(5-(a%5)))/5)<<endl;
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