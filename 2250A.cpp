#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define sp cout << " "
 
typedef long long ll;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> w(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    long long md = 2e18;
    long long mn = -1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            md = min(md, w[i]);
        } else {
            mn = max(mn, w[i]);
        }
    }
    if (md - mn >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main(){
    fastio;
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}
// Code by Tanber