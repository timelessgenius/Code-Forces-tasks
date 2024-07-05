#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int t; cin >> t;

    while(t--){
        vector<int> v(3);
        
        for(int i = 0; i < 3; i++) cin >> v[i];
        
        sort(v.begin(), v.end());

        cout << v[1] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
