#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define sp cout << " "
 
typedef long long ll;
 
void Solve(){
    int x,n; cin >> x >> n;
    set<int> light;
    multiset<int> destances;
    light.insert(0);
    light.insert(x);
    destances.insert(x);
    for(int i=1; i<=n; i++){
        int p; cin >> p;
        auto it = light.upper_bound(p);
        int right = *it;
        it--;
        int left = *it;
        destances.erase(destances.find(right-left));
        destances.insert(right-p);
        destances.insert(p-left);
        light.insert(p);
        cout << *destances.rbegin() << " ";
    }
    cout << "\n";
}
 
int main(){
    fastio;
    Solve();
    return 0;
}
// Code by Tanber