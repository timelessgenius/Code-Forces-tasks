#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s; cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = toupper(s[0]);
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
