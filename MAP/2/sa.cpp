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
#define forsn(i,s,e) for(ll i = s; i < e; i++)
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

/*DFS on tree
const int N = 1e3+10;
vector<int> tree[N];
void dfs1(int vertex, int parent)
{
   for(auto child:tree[vertex]) //go to each child subtree and run dfs again
   {
      if(child!=parent) dfs1(child,vertex);
   }
}
*/

   
  
int main() {
    int n;
    cin >> n;
    vector<int> a(n+2), l(n+2), r(n+2);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    stack<int> st;
    st.push(0);
    for (int i = 1; i <= n; i++) {
        while (a[st.top()] >= a[i]) {
            st.pop();
        }
        l[i] = st.top();
        st.push(i);
    }
    st = stack<int>();
    st.push(n+1);
    for (int i = n; i >= 1; i--) {
        while (a[st.top()] >= a[i]) {
            st.pop();
        }
        r[i] = st.top();
        st.push(i);
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += (long long)a[i] * (i - l[i]) * (r[i] - i);
    }
    cout << ans << endl;
    return 0;
}
