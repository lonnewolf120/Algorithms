#include <bits/stdc++.h>
   
using namespace std;
   
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i <= e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define yes cout << "YES\n"
#define no cout << "NO\n"

   
  
void solve()
{
	ll n; cin >> n;
	map<char,ll> mp;
	string a; cin >> a;
	forn(i,n)
	{
		if(a[i]=='N'||a[i]=='S'||a[i]=='U')mp[a[i]]++;
	}
	ll mx=1<<30;
	for(auto i:mp)
	{
		mx=min(mx,i.second);
	}
	if(mx== 1<<30)cout<<0<<ln;
	else	cout<<mx<<ln;
}
int main()
{
    fastio
    solve();
    return 0;
}