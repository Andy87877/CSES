#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    if (n ==1){
        cout << 1;
        return 0;
    } 

    if (n <= 3){
        cout << "NO SOLUTION\n";
        return 0;
    }

    for (ll i = n-1; i > 0; i -= 2){
        cout << i << " ";
    }
    for (ll i = n; i > 0; i -= 2){
        cout << i << " ";
    }

}