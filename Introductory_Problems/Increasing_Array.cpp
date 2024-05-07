#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll ans = 0;
    for (ll i = 1; i < n; i++){
        if (arr[i-1] > arr[i]){
            ans += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << ans << endl;
}