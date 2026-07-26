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
    string s; cin >> s;
    int l=0,r=n-1,ans = n;
    while(l<=r){
        if(s[l] == s[r]){
            break;
        }else{
            ans-=2;
            l++; r--;
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