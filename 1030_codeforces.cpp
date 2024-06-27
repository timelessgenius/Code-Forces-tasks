#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    
    vector<int> v(n);
    bool hard = false;
    
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++){
        if(v[i] == 1) hard = true;
    }
   
    (hard) ? cout << "HARD" << endl : cout << "EASY" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
