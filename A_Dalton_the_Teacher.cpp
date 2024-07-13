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
    ll n,cnt=0;
    cin>>n;
    ll a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==i+1) cnt++;
    }
    if(cnt%2==0) cout<<cnt/2<<endl;
    else cout<<(cnt/2)+1<<endl;
}
int main()
{
    faster;
    test;
    solve();
    return 0;
}
