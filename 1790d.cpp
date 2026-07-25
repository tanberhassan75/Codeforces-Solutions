#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define sp cout << " "
 
typedef long long ll;
 
void Solve(){
    int n; cin >> n;
    vector<ll>a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int ans = 1;
    for(int i=0; i<n-1; i++){
        if(a[i]+1 != a[i+1]){
            ans++;
        }else{
            a.erase(a.begin()+i);
        }
    }
    cout << ans << endl;
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