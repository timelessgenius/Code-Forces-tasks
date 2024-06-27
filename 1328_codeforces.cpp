#include <bits/stdc++.h>

using namespace std;

#define endl '\n'	
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;
        int aux = a%b;

        if(aux == 0) cout << "0" << endl;
        else cout << b-aux << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
