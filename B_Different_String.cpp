#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test ll tc; cin >> tc; while (tc--) { solve(); }

void solve() {
  string s;
    cin >> s;
  set<char> uniqueCharacters; 
  for (char c : s) {
        uniqueCharacters.insert(c);
    } 
    if(uniqueCharacters.size()==1) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        cout<<s[s.size()-1];
        s.erase(s.end()-1);
        cout<<s<<endl;
    }
}

int main() {
  faster;
  test;
  return 0; 
}
