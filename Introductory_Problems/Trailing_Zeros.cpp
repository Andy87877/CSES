#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

// find 5
int main() {
    Andy8787_want_AC
    ll n, ans = 0;
    cin >> n;


    for (ll i = 5; i <= n; i+=5) {
        ll now = i;
        while (now%625 == 0) {
            now/=625;
            ans+=4;
        }
        while (now%125 == 0) {
            now/=125;
            ans+=3;
        }
        while (now%25 == 0) {
            now/=25;
            ans+=2;
        }
        while (now%5 == 0) {
            now/=5;
            ans++;
        }
    }

    cout << ans << endl;
}