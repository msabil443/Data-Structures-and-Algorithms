#include <iostream>
using namespace std;
int main ()
{int n,k,l,c,d,p,nl,np; cin>>n>>k>>l>>c>>d>>p>>nl>>np; cout<<min(((k*l)/nl),min((p/np),(c*d)))/n<<endl; return 0;}