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
    int n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == 'B')
        {
            s.erase(i, k);
            cnt++;
            if (s[i] == ' ')
                break;
            i -= 1;
        }
    }
    cout << cnt << endl;
}
int main()
{
    faster;
    test;
    solve();
    return 0;
}
