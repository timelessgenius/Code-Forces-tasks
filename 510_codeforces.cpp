#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n,m; cin >> n >> m;
    int cont = 1;
    
    for(int i = 1; i <= n; i++){
        string s = "";
        
        if(i%2 != 0){
            for(int j = 1; j <= m; j++) s+= "#";
        }
        else{
            cont++;
            for(int j = 1; j <= m; j++){
                if(cont%2 == 0 && j == m){
                    s+="#";
                }
                else if(cont%2 != 0 && j == 1){
                    s+="#";
                }
                else s+=".";
            }
        }
        
            
        cout << s << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
