#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
using namespace std;
   
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define INF 2e18
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
   
  
void solve(){
    ll n,mx=0,nQ=0; cin >> n;
    string s; cin >> s;
    map<char,ll> mp;
    for(auto c:s)
    {
        mp[c]++;
        mx=max(mx,mp[c]);
    }
    for(auto c:s)
    {
        if(mp[c]<mx) nQ++;
        else nQ--;
    }
    cout << nQ << ln;

}
int main()
{
    fastio
    //ll t;
    //cin >> t;
    //for(int it=1;it<=t;it++) {
     //cout << "Case #" << it+1 << ": ";
        solve();
    //}
    return 0;
}