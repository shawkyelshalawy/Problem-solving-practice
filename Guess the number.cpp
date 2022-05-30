/**
      ||BY.Shawky faried shawky ||
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
#define all(x) x.begin(), x.end()

void minimize(int &a, int b)
{
    a = std::min(a, b);
}
void maximize(int &a, int b)
{
    a = std::max(a, b);
}
void solve()
{
     int mx = 2 * 1000 * 1000 * 1000;
    int mn = -mx;

    int n;
    cin >> n;
    while (n --> 0)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        string ans;
        cin >> ans;

        if (ans == "N")
        {
            if (s == ">=") s = "<";
            else if (s == "<") s = ">=";
            else if (s == "<=") s = ">";
            else s = "<=";
        }

        if (s == ">=") maximize(mn, x);
        else if (s == ">") maximize(mn, x + 1);
        else if (s == "<=") minimize(mx, x);
        else minimize(mx, x - 1);
    }

    if (mn <= mx) cout << mn;
    else cout << "Impossible";
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
