#include <bits/stdc++.h>
#define ll long long int
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define test     \
    ll tc;       \
    cin >> tc;    \
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
    string s,ss="";
    int n; 
    cin>>n>>s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i!=j && s[i]==s[j]){
                ss+=s[i];
                i=j;
                break;
            }
        }
    }
    cout<<ss<<endl;
}
int main()
{
    faster;
    test;
   // solve();
    return 0;
}

