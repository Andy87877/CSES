#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
 
    while (t--){
        ll y,x;
        cin >> y >> x;
 
        ll ans = 0;
        if (y >= x){
            if (y%2 == 0){
                ans = y*y;
                ans -= (x-1);
            } else {
                ans = (y-1)*(y-1)+1;
                ans += (x-1);
            }
        } else {
            if (x%2 == 1){
                ans = x*x;
                ans -= (y-1);
            } else {
                ans = (x-1)*(x-1)+1;
                ans += (y-1);
            }
        }
 
        cout << ans << endl;
    }
}