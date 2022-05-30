/*
/Shawky Faried Shawky
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define all(v)		((v).begin()), ((v).end())
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


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
    double n;
    cin >> n;
    vi x(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    double m;
    cin >> m;
    vi y(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> y[i];
    }
    double k;
    cin >> k;
    vi z(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> z[i];
    }
    double A,B;
    cin >> A >> B;
    sort(all(x));
    sort(all(y));
    sort(all(z));
    double ans = INT_MIN;
    for(ll j = 0;j<m;j++){

    double cnt = sqrt((x[n-1]*x[n-1]*B*y[j])/(B*y[j]+A*z[0]));
    ans = max(ans,cnt);
    }
    cout << setprecision(13) << endl;
    cout << ans <<endl;

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
