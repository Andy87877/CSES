#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    
    vector<ll> vec(n-1);
    for (ll i = 0; i < n-1; i++){
        cin >> vec[i];
    }
 
    sort(vec.begin(), vec.end());
    
    for (ll i = 0; i < n; i++){
        if (vec[i] != i+1){
            cout << i+1;
            return 0;
        }
    }
    cout << n;
}
