/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
// change these numbers
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;
/*void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 */
void solve()
{
    ll n,m,d;
  cin>>n>>m>>d;
  ll N=n*m;
  vector<ll> a(N);

  for(ll i=0;i<(N);i++)
    cin>>a[i];

  sort(all(a));

  bool check=1;
  ll x=a[N/2],ans=0;
  for(ll i=0;i<N;i++)
  {
     ll temp=abs(a[i]-x);
     if(temp%d!=0)
        check=0;

     ans+=(temp/d);
  }

  if(check)
    cout<<ans<<'\n';
  else
    cout<<-1<<'\n';
}
int32_t main()
{
    // c_p_c();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

