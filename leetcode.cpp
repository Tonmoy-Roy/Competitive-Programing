#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,c=0;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]) cnt++;
        if(a[i]>=a[i+1]) c++;
    }
    if(cnt==n-1 || c==n-1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}