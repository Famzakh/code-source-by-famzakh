#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e5+1;
ll p[N];
ll n,k;
ll tknp (int i, int n)
{
  ll l = i , r=n;
  ll mid;
  ll s=-1;
  while (l<=r)
  {
    mid=(l+r)/2;
    if (p[mid]-p[i-1]<=k) 
    {
      s=max(s,mid);
      l=mid+1;
    }
    else r=mid-1;
  }
  return s;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen ("CHONQUA.INP","r",stdin);
    freopen ("CHONQUA.OUT","w",stdout);
    ll t;
    cin >> t;
    while (t--)
    {
      cin >> n >> k;
      ll a[n];
      ll c=0;
      p[0]=0;
      for (int i=1;i<=n;i++)
      {
        cin >> a[i];
        p[i]=p[i-1]+a[i];
      }
      for (int i=1;i<=n;i++)
      {
        ll j=tknp(i,n);
        if (j>0) c+=j-i+1;
      }
      cout << c <<endl;
    }
    return 0;
 }  
//pgk
