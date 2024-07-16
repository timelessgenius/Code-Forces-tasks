#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int t, dif = 0; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n), aux(n);
        
        for(int i = 0; i < n; i++) {
            cin >> v[i]; 
            aux[i] = v[i];
        } 
        sort(v.begin(), v.end());
        for(int i = 0; i < n-1; i++){
            if(i == 0 && (v[i] != v[i+1]))
                dif = v[i];
            else if(v[i] != v[i+1])
                dif = v[i+1];
        }

        for(int i = 0; i < n; i++){
            if(dif == aux[i]){
                cout << i+1 << endl;
                break;
            }
        }
        
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
