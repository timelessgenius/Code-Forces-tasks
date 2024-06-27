#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s, s1; cin >> s >> s1;
    
    reverse(s1.begin(),s1.end());

    (s == s1) ? cout << "YES" << endl : cout << "NO" << endl;
    

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
