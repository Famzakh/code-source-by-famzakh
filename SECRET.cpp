#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,k;
vector<ll> ke[27];
bool v[27][27];
void dfs(ll x)
{
	v[k][x]=true;
	for (auto i:ke[x]) if(v[k][i]==false) dfs(i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SECRET.INP","r",stdin);
    freopen("SECRET.OUT","w",stdout);
    cin >> m >> n;
    for(ll i = 1; i <= m; i++)
    {
    	char x,y;
    	cin >> x >>y;
    	ke[x-'a'].push_back(y-'a');
    }
	  for ( k=0; k<26; k++) dfs(k);
    while(n--)
    {
      string s1,s2;
		  cin >> s1 >> s2;
		  ll d=0;
		  if (s1.size()!=s2.size())
		  {
		    cout<<"no"<<endl;
		    continue;
		  }
  		for(ll i = 0; i < s1.size(); i++)
  		{
  			ll x=s1[i]-'a';
  			ll y=s2[i]-'a';
	  		if (v[x][y]==false)
	  		{
	  		  d=1;
	  		  break;
	  		}
		  }
		if (d==1) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
    return 0;
}
//pgk
