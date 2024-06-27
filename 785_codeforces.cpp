#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n; 
    int ans = 0;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(s[0] == 'T')
            ans+=4;
        else if(s[0] == 'C')
            ans+=6;
        else if(s[0] == 'O')
            ans+=8;
        else if(s[0] == 'D')
            ans+=12;
        else if(s[0] == 'I')
            ans+=20;
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
