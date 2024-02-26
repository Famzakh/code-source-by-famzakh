#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll k,q,p, n, tmp, r, num;
ll solve (ll k)
{
    n = 1;
    p = 9;
    tmp = num = 0;
    while (tmp + n * p <= k)
    {
        tmp += n*p;
        num += p;
        n++;
        p *= 10;
    }
    k -= tmp;
    r = k%n;
    num += k/n;
    if (r==1) num++;
    ll res = num % 10;
    if (r == 0) return res;
    r = n - r;
    while (r--)
    {
      num /= 10;
      res = num % 10;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("018.inp","r",stdin);
    freopen("018.out","w",stdout);
    cin >> q;
    while (q--) {
        cin >> k;
        cout << solve(k) << endl;
    }
    return 0;
}
