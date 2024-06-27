#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    vector<int> v(4);
    for(int i = 0; i < 4; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int cont = 0;
    for(int i = 1; i < 4 ; i++){
        if(v[i] == v[i-1])
            cont++;
    }
    cout << cont << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;

}
