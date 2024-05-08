#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll n;

void one(){
    cout << "YES\n";
    cout << n/2+1 << "\n";
    
    ll now = 3;
    cout << "1 2 ";
    for (ll i=1; i<(n/2); i++){
        if (i%2 == 1){
            now++;
        } else {
            now += 3;
        }
        cout << now << " ";
    }
 
    cout << "\n" << n/2 << "\n";
    
    now = 2;
    cout << "3 ";
    for (ll i=1; i<(n/2); i++){
        if (i%2 == 0){
            now++;
        } else {
            now += 3;
        }
        cout << now << " ";
    }
}
/*
1+2 = 3
4+7 = 5+6
8+11 = 9+10
...

1+4 = 2+3
4+7 = 5+6
8+11 = 9+10
*/


void two(){
    cout << "YES\n";
    cout << n/2 << "\n";
    
    ll now = 0;
    for (ll i=0; i<(n/2); i++){
        if (i%2 == 0){
            now++;
        } else {
            now += 3;
        }
        cout << now << " ";
    }
 
    cout << "\n" << n/2 << "\n";
    
    now = -1;
    for (ll i=0; i<(n/2); i++){
        if (i%2 == 1){
            now++;
        } else {
            now += 3;
        }
        cout << now << " ";
    }
}

int main() {
    Andy8787_want_AC
    
    cin >> n;
    if ((n+1)%4 == 0) {
        one();
    } else if (n%4 == 0){
        two();
    } else {
        cout << "NO\n";
    }
}
 
 

