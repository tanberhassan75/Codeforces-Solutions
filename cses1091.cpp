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
    multiset<int> a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    for(int i=0; i<m; i++){
        int x; cin >> x;
        auto it = a.upper_bound(x);
        if(it == a.begin()){
            cout << "-1" <<endl;
        }else{
            it--;
            cout  << *it << endl;
            a.erase(it);
        }
    }
}
int main(){
    fastio;
    
        Solve();
    
    return 0;
}
// Code by Tanber