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
    ll a,b,c,N;
    cin>>a>>b>>c>>N;
    ll second=a+1;
    ll second1=a+b;
    ll third=a+b+1;
    ll third1=a+b+c;
    if(N>=1 && N<=a) cout<<"1"<<endl;
    else if(N>=second && N<=second1) cout<<"2"<<endl;
    else cout<<"3"<<endl;
}
int main()
{
    faster;
    //test;
    solve();
    return 0;
}
