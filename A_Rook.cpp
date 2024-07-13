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
    int n, j = 1;
    string s;
    cin >> s;
    char ch = s[1];
    for (int i = 1; i <= 8; i++)
    {
        if ((ch - '0') == i)
            continue;
        else
            cout << s[0] << i << endl;
    }
    for (char i = 'a'; j <= 8; j++, i++)
    {
        if (i == s[0])
            continue;
        else
            cout << i << s[1] << endl;
    }
}
int main()
{
    faster;
    test;
    // solve();
    return 0;
}
