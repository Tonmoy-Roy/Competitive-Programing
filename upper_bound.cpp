#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{11,45,66,66,66,73,90};
    auto it=upper_bound(v.begin(),v.end(),66);
    cout<<distance(v.begin()+1,it); //last occurence of 66
}