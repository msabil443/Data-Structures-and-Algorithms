//queen blocks
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
    int row,col;
    cin>>row>>col;
    row=row-1;
    col=col-1;
    int a[8][8]={0};
    
    // for ( int i=0; i<n ;i++)  
    // {  
    //     for (int j=0; j<n; j++)   
    //     {  
    //         a[i][j] = 0;   
    //     }  
    // }
    a[row][col]=1;
    if (row==0 && col==0)
    {
        a[row+2][col+1]=2;
    }
    else
    if ((row>0 && row<7)&& col==0)
    {
        a[row+1][col+2]=2;
        a[row-1][col+2]=2;
    }else
    if (col==7 && (row>0 && row<7))
    {
        a[row+1][col-2]=2;
        a[row-1][col-2]=2;
    }else
    if (row==7 && col==0)
    {
        a[row-1][col+2]=2;
        a[row-2][col+1]=2;
    }else
    if (row==7 && col==7)
    {
        a[row-2][col-1]=2;
        a[row-1][col-2]=2;
    }else
    if (row==0 && col==7)
    {
        a[row+2][col-1]=2;
        a[row-1][col-2]=2;
    }else
    if (row==1 && col==1)
    {
        a[row+2][col-1]=2;
        a[row+1][col+2]=2;
        a[row-1][col+2]=2;
    }else
    if (row==1 && col==6)
    {
        a[row-1][col-2]=2;
        a[row+1][col-2]=2;
        a[row+2][col+1]=2;
    }else
    if (row==6 && col==6)
    {
        a[row-2][col+1]=2;
        a[row-1][col-2]=2;
        a[row+1][col-2]=2;
    }else
    if (row==6 && col==1)
    {
        a[row+1][col+2]=2;
        a[row-1][col+2]=2;
        a[row-2][col+1]=2;
    }else
    if (row==0 && (col>0 && col<7))
    {
        a[row+2][col-1]=2;
        a[row+2][col+1]=2;
    }else
    if (col==7 && (row>0 && row<7))
    {
        a[row+1][col-2]=2;
        a[row-1][col-2]=2;
    }else
    if (row==7 && (col>0 && col<7))
    {
        a[row-2][col-1]=2;
        a[row-2][col+1]=2;
    }else
    if (row==1 && (col>1 && col<6))
    {
        a[row+2][col-1]=2;
        a[row+2][col+1]=2;
        a[row-1][col+2]=2;
    }else
    if (col==6 && (row>1 && row<6))
    {
        a[row+2][col-1]=2;
        a[row+1][col-2]=2;
        a[row-1][col-2]=2;
    }else
    if (row==6 && (col>1 && col<6))
    {
        a[row-2][col-1]=2;
        a[row-2][col+1]=2;
        a[row-1][col-2]=2;
    }else
    if (col==1 && (row>1 && row<6))
    {
        a[row-2][col+1]=2;
        a[row+1][col+2]=2;
        a[row-1][col+2]=2;
    }else
    {
        a[row-2][col-1]=2;
        a[row+2][col+1]=2;
    }
    
    // int n=8;
    for ( int i=0; i<8 ;i++)  
    {  
        for (int j=0; j<8; j++)   
        {  
            cout<<a[i][j]<<" ";
        }  
        cout<<endl;
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
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
  

   return 0;
}