#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n, k, ans = 0; cin >> n >> k;
   
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) cin >> v[i];
    
    for(int i = 0; i < n; i++){
        if(v[i] >= v[k-1] && v[i]){
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
