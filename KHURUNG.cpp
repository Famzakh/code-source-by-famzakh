#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e3+1;
ll a[N][N];
ll n,q;
ll p[N][N];
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen ("KHURUNG.inp","r",stdin);
    freopen ("KHURUNG.out","w",stdout);
    cin >> n >> q;
    char x;
    p[0][0]=0;
    for(ll i=0;i<=n;i++)
    {
      p[i][0]=0;
      p[0][i]=0;
    }
    for (int i=1;i<=n;i++)
    {
      for (int j=1;j<=n;j++)
      {
        cin >> x;
        if (x=='*') a[i][j]=1;
        else a[i][j]=0;
        p[i][j]= a[i][j] + p[i-1][j] + p[i][j-1]-p[i-1][j-1];
      }
    }
    while (q--)
    {
      ll x1,x2,y1,y2;
      ll c=0;
      cin >> x1 >> y1 >> x2 >> y2;
      cout <<p[x2][y2] - p[x1-1][y2] - p[x2][y1-1] + p[x1-1][y1-1]<<endl;
    }
    return 0;
 }
//pgk
