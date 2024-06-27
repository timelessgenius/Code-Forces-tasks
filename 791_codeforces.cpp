#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int l,b; cin >> l >> b;
    int count = 0;
    while(l <= b){
        l *= 3;
        b *= 2;
        count++;
    }
    cout << count << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
