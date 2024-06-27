#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n, k; cin >> n >> k; // n = numero que Tanya quer subtrair e k = o numero de vezes que ela deve subtrair.
    for(int i = 0; i < k; i++){
        if(n%10==0)
            n=n/10;
        else n-=1;
    }
    cout << n << endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

/*
    caso a ultima casa do numero for 0: n/10.
    caso a ultima casa do numero for diferente de 0: n-1.

*/