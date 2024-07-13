#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{11,45,66,73,90};
    auto it=lower_bound(v.begin(),v.end(),65);
    cout<<distance(v.begin(),it);
}