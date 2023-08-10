#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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

   
ll n,c;

bool chk(ll dst, vector<ll>& v)
{
	ll last=v[0],cnt=1;
	forsn(i,1,n-1)
	{
		if(v[i]-last >= dst)
		{
			last = v[i];
			++cnt;
		}
	}
	return (cnt>=c)? true:false;
}

void solve()
{
	cin >> n >> c;
	vector<ll> v(n);
	for(auto &i:v) cin >> i;
	sort(all(v));
	
	ll l=0,r=v[n-1]-v[0];

	while(l<=r)
	{
		ll mid=l+(r-l)/2;
		if(chk(mid,v))
			l=mid+1;
		else
			r=mid-1;
	}
	cout<<r<<ln;
}
int main()
{
    fastio
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
     //cout << "Case " << it << ": ";
        solve();
    }
    return 0;
}