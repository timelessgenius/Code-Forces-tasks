#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int pa = 0, pb = 0;

    while(pa < n && pb < m){
        if(a[pa] < b[pb]){
            cout << a[pa] << " ";
            pa++;
        }
        else{
            cout << b[pb] << " ";
            pb++;
        }
    }
    while(pa < n){
        cout << a[pa] << " ";
        pa++;
    }
    while(pb < m){
        cout << b[pb] << " ";
        pb++;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
