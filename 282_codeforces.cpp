#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    string s;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == "++X" || s == "X++"){
            ans++;
        }
        else ans--;
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
