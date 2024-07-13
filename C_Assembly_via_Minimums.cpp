#include <bits/stdc++.h>
#define ll long long int
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define test     \
    ll tc;       \
    cin >> tc;   \
    tc--;        \
    while (tc--) \
    {            \
        solve(); \
    }
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}
using namespace std;
void solve()
{
    ll n, cnt = 0, mx;
    cin >> n;
    ll a[n + 5];
    ll k = (n * (n - 1)) / 2;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    if (n == 2)
        cout << a[0] << " " << a[0] << endl;
    
    else
    {
        sort(a,a+(n-1));
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[n-1]+a[n-2] << endl;
    }
}
int main()
{
    faster;
    test;
    solve();
    return 0;
}
