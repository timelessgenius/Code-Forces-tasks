#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s, s1; cin >> s >> s1;
    string ans = "";
    for(int i = 0; i < (int) s.size();i++) (s[i]==s1[i]) ? ans+="0" : ans+="1";
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
