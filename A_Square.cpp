#include <bits/stdc++.h>
#define ll long long int
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define test     \
    ll tc;       \
    cin >> tc;   \
    while (tc--) \
    {            \
        solve(); \
    }
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
ll Pow(ll c, ll d) { return d == 0 ? 1 : c * pow(c, d - 1); }
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }
using namespace std;
void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a[n + 5], b[n + 5];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i] >> b[i];
        }
        int ans = abs(a[2] - a[0])*abs(a[2] - a[0]);
        int ans1 = abs(b[2] - b[0])*abs(b[2] - b[0]);
        int ans3 = sqrt(ans + ans1);
        cout << (ans3*ans3) << endl;
    }
}
int main()
{
    faster;
    // test;
    solve();
    return 0;
}
