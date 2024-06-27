#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    vector<int> v(3);
    
    for(int i = 0; i < 3; i++) cin >> v[i];

    sort(v.begin(),v.end());
    
    int ans = 0;
    
    ans += abs(v[0] - v[1]);
    ans += abs(v[1] - v[2]);
    
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
