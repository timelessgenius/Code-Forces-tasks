#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        if(abs(a-b) >= 2)
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
