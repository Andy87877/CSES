#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    ll ans = 1;
    for (ll i = 0; i < n; i++){
        ans *= 2;
        ans %= (1000000007);
    }
    cout << ans << endl;
}