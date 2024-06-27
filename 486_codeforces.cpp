#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    ll n; cin >> n;
    ll ans = 0;
    (n%2==0) ? ans = n/2 : ans = -(n+1)/2 ;
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve(); 
    return 0;
}
