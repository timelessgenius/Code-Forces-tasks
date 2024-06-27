#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    set<char> ans;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i]>= 'A' && s[i] <= 'Z')
            s[i] = tolower(s[i]);
        ans.insert(s[i]);
    }
    if(ans.size() == 26)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
