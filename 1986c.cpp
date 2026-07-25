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
    string s,c; cin >> s;
    vector<int>index(m);
    for(auto &x : index) cin >> x;
    cin >> c;
    set<int> idx;
    for(auto x : index){
        idx.insert(x-1);
    }
    sort(c.begin(),c.end());
    int j = 0;
    for(auto i: idx){
        s[i] = c[j++];
    }
    cout << s << endl;
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