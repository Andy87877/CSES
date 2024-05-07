#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    cin >> s;
    ll ans = 1, now = 1;
    for (ll i = 1; i < s.size(); i++){
        if (s[i] == s[i-1]){
            now++;
            ans = max(ans,now);
        } else{
            now = 1;
        }
    }
    cout << ans << "\n";
}