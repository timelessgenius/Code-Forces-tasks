#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;        
        (s == "abc" || s == "bac" || s == "cba" || s == "acb") ? cout << "YES" << endl : cout << "NO" << endl;      
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
