// TLE????
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
 
ll n,m;
char arr[1005][1005];
 
void judge(ll a, ll b){
    queue<pair<ll, ll>> qu;
    qu.push({a,b});
    while (qu.size() != 0){
        ll x = qu.front().first ,y = qu.front().second;
        qu.pop();
        arr[x][y] = 'X';
 
        if (arr[x+1][y] == '.'){
            qu.push({x+1,y});
        }
        if (arr[x-1][y] == '.'){
            qu.push({x-1,y});
        }
        if (arr[x][y+1] == '.'){
            qu.push({x,y+1});
        }
        if (arr[x][y-1] == '.'){
            qu.push({x,y-1});
        }
    }
 
    return;
}
 
int main() {
    Andy8787_want_AC
    memset(arr, 0, sizeof(arr));
 
    cin >> n >> m;
    
    for (ll i = 1; i < n+1; i++){
        for (ll j = 1; j < m+1; j++){
            cin >> arr[i][j];
        }
    }
 
    ll ans = 0;
    for (ll i = 1; i < n+1; i++){
        for (ll j = 1; j < m+1; j++){
            if (arr[i][j] == '.'){
                ans++;
                judge(i,j);
            }
        }
    }
 
    cout << ans << endl;
}
