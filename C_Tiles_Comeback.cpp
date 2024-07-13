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
    ll n, k, cntA = 1, adjA = 0, adjB = 0, cntB = 1;
    cin >> n >> k;
    ll a[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(i!=0 && a[i]==a[0]) cntA++;
        if(i!=n-1 && a[i]==a[n-1]) cntB++;
        if(a[i]==a[i+1] && a[i]==a[0]) adjA++;
        if(a[i]==a[i+1] && a[i]==a[n-1]) adjB++;
    }
    //cout << cntA << " " << cntB << " " << adjA << " " << adjB << endl;
    if(k==1 && cntA>=k && cntB>=k) yes
    else if(k>1 && cntA>=k && cntB>=k && (adjA>0 || adjB>0)) yes
    else no
}
int main()
{
    faster;
    test;
    solve();
    return 0;
}
