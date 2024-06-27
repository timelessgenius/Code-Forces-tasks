#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string a,b; cin >> a >> b;
    string aux; cin >> aux;
    
    sort(aux.begin(),aux.end());
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    string test = a+b;
    
    sort(test.begin(),test.end());
    
    if(test == aux) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
