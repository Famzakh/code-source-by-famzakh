#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e5+1;
ll x,n;
ll kil[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("HANGCAY.INP", "r", stdin);
    freopen("HANGCAY.OUT", "w", stdout);
    cin >> n;
    vector <pair <ll, ll>> a;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a.push_back({x,i});
    }
    ll c= 0;
    sort(a.begin(),a.end());
    for (auto m:a)
    {
        if (kil[m.second] == 1) continue;
        kil[m.second] = 1;
        kil[m.second - 1] = 1;
        kil[m.second + 1] = 1;
        c++;
    }
    cout << c;
    return 0;
}
//3
//3 2 2
