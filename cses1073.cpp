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
    multiset<int> towers;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        auto it = towers.upper_bound(x);
        if(it != towers.end()){
            towers.erase(it);
            towers.insert(x);
        }else{
            towers.insert(x);
        }
    }
    cout << towers.size() << endl; 
}
 
int main(){
    fastio;
    
        Solve();
    
    return 0;
}
// Code by Tanber