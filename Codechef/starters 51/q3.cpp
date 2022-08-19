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
    for (int i=0; i<a; i++)
    {
        cin>>arr1[i];
    }
    map<ll,ll> m;
    for (int i=0 ;i<a; i++)
    {
        m[arr1[i]]++;
    }
    map<ll,ll>::iterator i;
    vector <int>arr(m.size());
    ll j=0;
    for (i=m.begin(); i!=m.end(); i++)
    {
        arr[j]=i->second;
        j++;
    }
    // for (int i=0 ; i<m.size(); i++)
    // {
    //     arr[arr[i]%m.size()]+=m.size();
    // }
    // int count=0;
    // for (int i=0; i<m.size(); i++)
    // {
    //     if (arr[i]>=(m.size()*2))
    //     {
    //         count++;
    //     }
    // }
    // if (count)
    // {
    //     cout<<"YES\n";
    // }
    // else
    //     cout<<"NO\n";

    // map<ll,ll>m2;
    // for (int i=0; i<m.size(); i++)
    // {
    //     m2[arr[i]]++;
    // }
    // map<ll,ll>::iterator n;
    // ll arr3[m2.size()];
    // ll k=0;
    // for (n=m2.begin(); n!=m2.end(); n++)
    // {
    //     arr3[k]= n->second;
    //     k++;
    // }
    // ll count=0;
    // for (int i=0; i<m2.size(); i++)
    // {

    //     if (arr3[i]==1)
    //     {
    //         count++;
    //     }
    // }
    
    // if (count==1)
    // {
    //     cout<<"YES\n";
    // }
    // else
    //     cout<<"NO\n";

    int max=INT_MIN;
    for (int i=0; i<m.size(); i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            // arr.erase(arr.begin()+i);
            
        }

    }
    // cout<<max<<" ";
    int count=0;
    // for (int i=0;i<m.size();i++)
    // {
    //     cout<<arr[i];
    // }
    for (int i=0; i<m.size();i++)
    {
        if (arr[i]==max)
        {
            count++;
        }
    }
    // cout<<count;
    if (count>=2)
    {
        cout<<"NO\n";
    }
    else
        cout<<"YES\n";

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