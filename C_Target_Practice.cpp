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
    char s[12][12];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j] == 'X')
            {
                if (i == 0 || i == 9 || j == 0 || j == 9)
                    sum += 1;
                else if (i == 1 || i == 8 || j == 1 || j == 8)
                    sum += 2;
                else if (i == 2 || i == 7 || j == 2 || j == 7)
                    sum += 3;
                else if (i == 3 || i == 6 || j == 3 || j == 6)
                    sum += 4;
                else if (i == 4 || i == 5 || j == 4 || j == 5)
                    sum += 5;
            }
        }
    }
    cout << sum << endl;
}
int main()
{
    faster;
    test;
    solve();
    return 0;
}
