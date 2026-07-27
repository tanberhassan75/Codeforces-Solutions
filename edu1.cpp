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
    vector<int> a(n),b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    int cnt = 0;
    int l = 0,r=0;
    while(r<m){
        if(l < n && a[l] < b[r]){
            cnt++;
            l++;
        }else{
            cout << cnt << " ";
            r++;
        }
    }
    
}
int main(){
    fastio;
    int tc; cin >> tc;
    while(tc--){
        Solve();
    }
    return 0;
}
// Code by Tanber