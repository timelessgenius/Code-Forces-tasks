#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;


void solve(){
    int n; cin >> n;
   
    vector<int> v(3);
   
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        int cont_aux = 0;
        
        for(int j = 0; j < 3; j++){
            cin >> v[j];
            if(v[j] == 1)
                cont_aux++;
        }
        
        if(cont_aux >= 2)
            ans++;
    }
    cout << ans << endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}