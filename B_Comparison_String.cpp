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
    ll n,init;
    string s;
    set<int>st;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='<' && i==0) {
            init=1;
            st.insert(init);
        }
        if(s[i]=='>' && i==0) init=n+1;
        else if(s[i]=='<') init
    }
}
int main()
{
    faster;
    test;
    solve();
    return 0;
}
