#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{11,45,66,73,90};
    bool ans=binary_search(v.begin(),v.end(),46);
    if(ans) cout<<"found";
    else cout<<"not found";
}