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
    vector<ll> a(n), b(m);
    map<ll,int> mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    ll ans = 0;
    for(auto x:b){
        ans+=mp[x];
    }
    cout << ans << endl;
}
 
int main(){
    fastio;
        Solve();
    return 0;
}
// Code by Tanber