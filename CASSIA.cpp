#include <bits/stdc++.h>
#define ll long long
#define lb lower_bound
using namespace std;
const ll N = 1e5+1;
ll n, a[N], b[N];
ll res=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen ("CASSIA.INP","r",stdin);
    freopen ("CASSIA.OUT","w",stdout);
    cin >> n;
    for(ll i=1;i<=n;i++) cin >> a[i];
    sort (a+1,a+n+1);
    a[n+1]=a[n]+n;
    res=n-1;
    ll i=1,j=1;
    while (i<=n && j <=n)
    {
      while (a[j]<=a[i]+n-1)
      {
        j++;
      }
      res=min(res,n-j+i);
      i++;
    }
    cout << res;
    return 0;
}
