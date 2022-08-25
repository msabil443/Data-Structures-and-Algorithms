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
    int x,y;
    cin>>x>>y;
    int a[8][8];
    int n=8;
    for ( int i=0; i<n ;i++)  
    {  
        for (int j=0; j<n; j++)   
        {  
            a[i][j] = 0;   
        }  
    }  
    a[x-1][y-1]=1;
    for ( int i=0; i<n ;i++)  
    {  
        for (int j=0; j<n; j++)   
        {  
            cout<<a[i][j]<<" ";
        }  
        cout<<endl;
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
    // cin>>tt;÷
    // whis
        solve ();
    // }
  

   return 0;
}