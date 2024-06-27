#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int w, k, n; cin >> w >> k >> n; // w = valor da primeira banana, k = quanto o soldado tem de dinheiro, n = quantas bananas ele quer.
    int sum = w;

    for(int i = 2; i <= n; i++){ 
        sum+= i*w;
    }
    if(sum <= k){
        cout << "0" << endl;
        return;
    }
    
    cout << abs(k - sum) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
