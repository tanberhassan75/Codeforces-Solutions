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
    multiset<int> a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    int cnt = 0;
    while (!a.empty())
    {
        cnt++;
        auto take = *a.begin();
        while (true)
        {
            auto it = a.find(take);
            if (it == a.end())
            {
                break;
            }
            a.erase(it);
            take++;
        }
    }
    cout << cnt << endl;
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