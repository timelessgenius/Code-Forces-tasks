#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < (int)s.size();j++)
            s[j]=tolower(s[j]);
        if(s == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
