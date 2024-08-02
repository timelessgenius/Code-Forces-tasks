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

    int pa = 0, pb = 0, cont = 0;

    while(pa < n && pb < m){
        if(a[pa] < b[pb]){
            cont++;
            pa++;
        }else{
            cout << cont << " ";
            pb++;
        }

    }
    while (pb < m)
    {
        cout << cont << " ";
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
