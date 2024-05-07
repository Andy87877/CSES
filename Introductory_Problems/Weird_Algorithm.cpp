#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    while (n != 1){
        cout << n << " ";
        if (n%2) {
            n = n*3+1;
        } else {
            n = n/2;
        }
    }
 
    cout << 1;
}
