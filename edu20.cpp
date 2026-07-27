#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define sp cout << " "
 
typedef long long ll;
 
void Solve(){
    int n,m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int l = 0, r = 0;
    ll ans = 0;
    while(l < n && r < m){
        int curr = a[l], cnt1 = 0, cnt2 = 0;
        while(l < n && curr == a[l]){
            cnt1++;
            l++;
        }
        while(r < m && curr > b[r]){
            r++;
        }
        while(r < m && b[r] == curr){
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;
    
}
 
int main(){
    fastio;
    Solve();
    return 0;
}
// Code by Tanber