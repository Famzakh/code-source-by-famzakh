#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dientich (ll x1, ll y1, ll x2, ll y2)
{
    return (x2 - x1) * (y2 - y1);
}
ll giaonhau(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x4, ll y4)
{
    ll x5 = max(x1, x3);
    ll y5 = max(y1, y3);
    ll x6 = min(x2, x4);
    ll y6 = min(y2, y4);
    if (x5 > x6 || y5 > y6)
    {
        return 0;
    }
    else return dientich(x5, y5, x6, y6);
}

ll solve(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x4, ll y4) {
    return dientich(x1, y1, x2, y2) + dientich(x3, y3, x4, y4) - 2 *giaonhau(x1, y1, x2, y2, x3, y3, x4 ,y4);
}

int main()
{
  freopen ("B_HCN","r",stdin);
  freopen ("B_HCN","w",stdout);
    ll x1, y1, x2 ,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll x3 ,y3 ,x4 ,y4;
    cin >> x3 >> y3 >> x4 >> y4;
    cout << solve(x1,y1,x2,y2,x3,y3,x4,y4) << endl;
    return 0;
}
