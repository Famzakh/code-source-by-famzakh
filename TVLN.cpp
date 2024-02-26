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
    //freopen ("khurung.inp","r",stdin);
    //freopen ("khurung.out","w",stdout);
    cin >> n >> q;
    char x;
    p[0][0]=0;
    for (int i=1;i<=n;i++)
    {
      for (int j=1;j<=n;j++)
      {
        cin >> x;
        if (x=='*') a[i][j]=1;
        else a[i][j]=0;
        p[i][j]=p[i-1 ]
      }
    }
    while (q--)
    {
      ll x1,x2,y1,y2;
      ll c=0;
      cin >> x1 >> y1 >> x2 >> y2;
      for (int i=x1;i<=x2;i++)
      {
        for (int j=y1;j<=y2;j++)
        {
          c+=a[i][j];
        }
      }
      cout << c<<endl;
    }
    return 0;
 }
//pgk
